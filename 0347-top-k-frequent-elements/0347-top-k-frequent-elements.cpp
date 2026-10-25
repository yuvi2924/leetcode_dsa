class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp1;
        for (int i = 0; i < nums.size(); i++) {
            mp1[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        vector<int> res;
        for (auto i : mp1) {
            pq.push({i.second, i.first});
        }
        for (int i = 0; i < k; i++) {
            res.push_back(pq.top().second);
                pq.pop();
        }
        return res;
    }
};