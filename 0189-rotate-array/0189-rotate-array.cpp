class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        
        reverse(nums.begin(), nums.end());
        //reverse k no of arry only
        reverse(nums.begin(), nums.begin() + k);
        //again revrse whole array
        reverse(nums.begin() + k, nums.end());
    }
};