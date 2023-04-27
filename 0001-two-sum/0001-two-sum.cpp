#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            int cur = nums[i];
            // cur + x = target
            // x = target - cur
            int x = target-cur;
            
            if(mp.find(x)!=mp.end()){
                return {mp[x], i};
            }
            
            mp[cur]=i;
        }
        
        return {-1,-1};
    }
};