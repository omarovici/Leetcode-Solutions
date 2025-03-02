class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans = \\;
        for (int i = 0; i < s.size(); i++)
        {
            string word = \\;
            if(s[i] == ' ') continue;
            while (s[i] != ' ' && i < s.size())
            {
                word += s[i];
                i++;
            }
            st.push(word);
        }
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
            if(!st.empty()) ans += \ \;
        }
        return ans;
    }
};