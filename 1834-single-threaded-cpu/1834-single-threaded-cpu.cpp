class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
  //yuvi sharma 
  //2420954
  //R&Ai
        vector<array<long long, 3>> a;

        for (int i = 0; i < n; i++) {
            a.push_back({tasks[i][0], tasks[i][1], i});
        }
   //yuvi sharma 
  //2420954
  //R&Ai
        sort(a.begin(), a.end());

        priority_queue<
            pair<long long, int>,
            vector<pair<long long, int>>,
            greater<pair<long long, int>>
        > pq;
   //yuvi sharma 
  //2420954
  //R&Ai
        vector<int> ans;

        long long time = 0;
        int i = 0;
   //yuvi sharma 
  //2420954
  //R&Ai
        while (i < n || !pq.empty()) {

        
            if (pq.empty() && time < a[i][0]) {
                time = a[i][0];
            }
            while (i < n && a[i][0] <= time) {
                pq.push({a[i][1], a[i][2]});
                i++;
            }
   //yuvi sharma 
  //2420954
  //R&Ai
           
            auto [processingTime, index] = pq.top();
            pq.pop();

            ans.push_back(index);

            time += processingTime;
        }
   //yuvi sharma 
  //2420954
  //R&Ai
        return ans;
    }
};