class Solution {
public:
    int pivotInteger(int n) {
        int ans1 = 0, ans2 = 0;
        for (int i = 1; i <= n; i++) 
            ans1 += i;
        
        ans2 = n;
        bool q = false;

        while (n > 0 && !q && ans1!=ans2) {
            ans1 -= n;
            n--;
            ans2 += n;
            if (ans1 == ans2) 
                q = true;
        }

        if (ans1 == ans2) 
            return n;
        else 
            return -1;
    }
};
