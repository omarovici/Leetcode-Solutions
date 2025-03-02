class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> v1,v2;
        for(int i=0;i<nums1.size();i++) v1.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++) v1.push_back(nums2[i]);
        sort(v1.begin(), v1.end());
        int i=0;
        while (i < v1.size()) {
            if (i + 1 < v1.size() && v1[i][0] == v1[i + 1][0]) {
                v2.push_back({v1[i][0], v1[i][1] + v1[i + 1][1]});
                i += 2;
            } else {
                v2.push_back({v1[i][0], v1[i][1]});
                i++;
            }
        }
        // for(int i=0;i<v1.size()-1;i++)
        // {
        //     if(v1[i][0]==v1[i+1][0])
        //     {
        //         v2.push_back({v1[i][0],v1[i][1]+v1[i+1][1]});
        //         i++;
        //     }
        //     else 
        //     {
        //         v2.push_back({v1[i][0],v1[i][1]});
        //     }
        // }
        return v2;
    }
};