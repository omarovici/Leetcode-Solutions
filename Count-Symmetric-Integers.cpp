class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
    string s;
    int size = 0 , cnt1 = 0 , cnt2 = 0 , ans = 0;
    for (int i = low; i <= high; i++)
    {
        s = to_string(i);
        if(s.size()%2!=0) continue;
        size = s.size();
        cnt1 = 0 , cnt2 = 0;
        for (int j = 0; j < size/2; j++)
        {
            cnt1 += stoi(string(1, s[j]));
            cnt2 += stoi(string(1, s[size-j-1]));
        }
        if(cnt1==cnt2) ans++;
    }
    return ans; 
}
};