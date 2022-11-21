
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> map;
        
        if(nums.size() <= 1) return result;
        
        for(int i=0; i<nums.size(); i++){
            if((target - nums[i]) != map.end()){
            	// != means that (target - nums[i]) matches a key value before the map ends.
            	// == means that (target - nums[i]) do not match any keys, and let the map ends.
                result[0] = i;
                result[1] = map[target - nums[i]];
            }else{
                map[nums[i]] = i;
            }
        }
        
        return result;
    }
};
