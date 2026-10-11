class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=1;i<=n;i++){
            if(n%i==0)
            res.push_back(nums[i-1]);
        }
        int sq=0;
        for(int i=0;i<res.size();i++){
                sq+=res[i]*res[i];
        }
        return sq;
    }
};