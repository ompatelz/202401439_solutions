class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> to;
        for(int i = 0; i < size; i++) {
            int tar = target - nums[i];
            for(int j = 0; j < size; j++) {
                if(i != j && tar == nums[j]) {
                    to.push_back(i);
                    to.push_back(j);
                    return to;
                }
            }
        }
        return to; 
    }
};