class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>greater;
        vector<int>smaller;
        vector<int>ans;
        int i = 0 , countPivot = 0;
        while(i<nums.size())
        {
            if(nums[i]>pivot) greater.push_back(nums[i]);
            else if(nums[i]<pivot) smaller.push_back(nums[i]);
            else countPivot++;
            i++;
        }
        i = 0;
        while(i<smaller.size()) 
        {
            ans.push_back(smaller[i]);
            i++;
        }
        i = 0;
        while(i<countPivot) 
        {
            ans.push_back(pivot);
            i++;
        }
        i = 0;
        while(i<greater.size()) 
        {
            ans.push_back(greater[i]);
            i++;
        }
        return ans;
    }
};