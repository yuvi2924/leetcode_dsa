class Solution {
public:
void fun(vector<int>& arr,int n,int idx,vector<int>&diary,int sum,vector<vector<int>>&res,int tar){
  //base case 
    if(idx==n){
        if(sum==tar)
            res.push_back(diary);
        return;
    }
//choice 1 no change
 fun(arr,n,idx+1,diary,sum,res,tar);
 //choice 2
 if(arr[idx]+sum<=tar){
    diary.push_back(arr[idx]);
    sum+=arr[idx];
 fun(arr,n,idx,diary,sum,res,tar);
    diary.pop_back();
        sum-=arr[idx];
 }
     return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>res;
        vector<int>diary;
        fun(candidates,n,0,diary,0,res,target);
        return res;
    }
};