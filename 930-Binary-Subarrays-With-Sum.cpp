class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> um;
        int sum = 0, count = 0;
        for (int num : nums) {
            um[sum]++;
            sum += num;
            count += um[sum - goal];
        }
        return count;
    }
};