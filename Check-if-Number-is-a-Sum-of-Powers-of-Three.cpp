class Solution {
public:
    bool checkPowersOfThree(int n) {
        int cube = cbrt(n);
        int count = 0, ans;
        while (cube != -1) {
            long double	 power = pow(3, cube);
            if (power <= n) {
                count += power;
                ans = power;
                if (count > n) count -= ans;
            }
            cube--;
        }
        if (count == n) return true;
        else return false;
    }
};
