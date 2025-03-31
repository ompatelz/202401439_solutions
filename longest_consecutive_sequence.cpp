class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;  
        if (nums.size() == 1) return 1; 
        sort(nums.begin(), nums.end());
        int count = 1;  
        int maxx = 1;
        for(int i = 1; i < nums.size(); i++) { 
            if (nums[i-1] + 1 == nums[i]) { 
                count++;
                maxx = max(maxx, count);
            }
            else if (nums[i] == nums[i-1]) {  
                continue;
            }
            else { 
                count = 1; 
            }
        }
        return maxx;
    }
};