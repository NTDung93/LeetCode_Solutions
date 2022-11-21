
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> map;
        
        if(nums.size() <= 1) return result;
        
        for(int i=0; i<nums.size(); i++){
            if((target - nums[i]) != map.end()){
                result[0] = i;
                result[1] = map[target - nums[i]];
            }else{
                map[nums[i]] = i;
            }
        }
        
        return result;
    }
};
