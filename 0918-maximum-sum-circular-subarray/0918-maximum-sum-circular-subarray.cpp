class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=nums[0];
        int res=nums[0];
        int mini=nums[0];
        int sum=nums[0];
        int minsum=nums[0];

        for(int i=1;i<nums.size();i++){

            int v1=nums[i];
            int v3=mini+nums[i];
            int v2=maxi+nums[i];
     //sum
            sum+=nums[i];

            maxi=max(v1,v2);
            mini=min(v1,v3);
            res=max(res,maxi);
            minsum=min(minsum,mini);
        }
        if(maxi<0){
         return res;
        }
       // Circular subarray
        res = max(res, sum - minsum);
        return res;
    }
};