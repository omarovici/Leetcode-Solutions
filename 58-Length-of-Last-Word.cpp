class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool a = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                count++;
                a = true;
            } else if (a) {
                break;
            }
        }
        return count;
    }
};