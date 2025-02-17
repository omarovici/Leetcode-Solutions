class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = \\;
        char c = '0';
        for (size_t i = 0; i < strs[0].size(); i++)
        {
            c = strs[0][i];
            for (size_t j = 1; j < strs.size(); j++)
            {
                if(c!=strs[j][i])
                return ans;
            }
            ans+=c;
        }
        return ans;
    }
};
