class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi=nums[0];
        int mini=nums[0];
        for(int i=0;i<nums.size();i++){
            //find min and max
         mini=min(mini,nums[i]);
         maxi=max(maxi,nums[i]);}

     for(int i=0;i<nums.size();i++){
        //find that number
         if(nums[i]!=mini && nums[i]!=maxi)
         return nums[i];
        }
     return -1;
    }
};