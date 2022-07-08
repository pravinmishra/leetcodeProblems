class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> suffledNums;
        for(int i = 0;i<n;i++){
            suffledNums.push_back(nums[i]);
            suffledNums.push_back(nums[i+n]);            
        }
        return suffledNums;
    }
};
