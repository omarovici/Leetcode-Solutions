class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v = heights;
        int x = 0;
        
        sort(v.begin(), v.end());
        
        for (size_t i = 0; i < heights.size(); ++i) {
            if (heights[i] != v[i]) {
                x++;
            }
        }
        
        return x;
    }
};