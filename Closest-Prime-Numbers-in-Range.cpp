class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> v;
        int num1 = -1 , num2 = -1 , difference = INT16_MAX; 
        int ans1 = -1 , ans2 = -1;
        for (int i=left ; i<=right ; i++)
        {
            if(isPrime(i)){
                if(num1==-1) num1=i;
                else if(num2==-1) num2=i;
            }
            if(num1!=-1&&num2!=-1){
                if(difference>num2-num1)
                {
                difference = num2-num1;
                ans1 = num1;
                ans2 = num2;
                }
                num1 = num2;
                num2 = -1;
            }
        }
        v.push_back(ans1);
        v.push_back(ans2);
        return v;
    }
    bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i = i + 6)
        if(n % i == 0 || n % (i + 2) == 0) return false;

    return true;
}
};