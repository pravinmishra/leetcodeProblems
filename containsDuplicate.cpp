class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     bool exist = false;
     sort(nums.begin(),nums.end());   
     for(int i=0;i<nums.size();i++){
         if((i+1) == nums.size()){
             break;
         }
         if(nums[i] == nums[i+1]){
             exist = true;
         }
     }
    return exist;    
    }
};
