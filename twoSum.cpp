class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos;
        for(int i = 0; i<nums.size();i++){
            for(int j = i+1; j < nums.size();j++){
                if(nums[i]+nums[j] == target){
                    pos.push_back(i);
                    pos.push_back(j);
                }                
            }
        }
        return pos;
    }
};