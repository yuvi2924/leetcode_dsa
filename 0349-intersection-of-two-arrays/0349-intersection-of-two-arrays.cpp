class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        vector<int>res;
        for(int i=0;i<nums2.size();i++){
            if(mp1.find(nums2[i]) != mp1.end())
            res.push_back(nums2[i]);
            mp1.erase(nums2[i]);
        }
        return res;
    }
};