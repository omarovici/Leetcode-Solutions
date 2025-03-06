class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans,ans1;
        int repeated = -1 , missing = -1;
        for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[i].size(); j++)
        ans.push_back(grid[i][j]);

        sort(ans.begin(), ans.end());
        int size = ans.size();
        for (int i = 0; i < size-1; i++)
        {
        if(ans[i+1]-ans[i]==2) missing = ans[i]+1;
        if(ans[i]==ans[i+1]) repeated = ans[i];
        }
        if(missing == -1&&ans[size-1]!=size) missing = size;
        else if(missing == -1) missing = ans[0]-1;

        ans1.push_back(repeated);
        ans1.push_back(missing);

        return ans1;
    }
};