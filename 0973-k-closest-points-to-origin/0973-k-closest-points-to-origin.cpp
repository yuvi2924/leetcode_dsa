class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int dis;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        vector<vector<int>> res;
        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            dis = x * x + y * y;
            pq.push({dis, i});
        }
        while (!pq.empty() && res.size() < k) {
            pair<int, int> p = pq.top();
            res.push_back(points[p.second]);
            pq.pop();
        }
        return res;
    }
};