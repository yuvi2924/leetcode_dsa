class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0;
        int equal = 0;
        vector<int> res;
        for (int x : nums) {
            if (x < target)
                smaller++;
            else if (target == x) {
                equal++;
            }
        }
        for (int i = smaller; i < smaller + equal; i++) {
            res.push_back(i);
        }

        return res;
    }
};