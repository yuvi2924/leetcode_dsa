class Solution {
public:
    int fun(vector<int>&a,int t,int i,int n){
        if(i==n) return t == 0;
        if(t<a[i]) return fun(a,t,i+1,n);
        int c1=fun(a,t-a[i],i+1,n);
        int c2=fun(a,t,i+1,n);

        return c1 + c2;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
    int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
  sum+=nums[i];
    }
  if(abs(target)>sum) return 0;
  if((sum+target)%2!=0) return 0;
  int range = (sum+target)/2;
 return fun(nums,range,0,n);
    }
};