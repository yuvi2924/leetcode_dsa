class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<
    pair<int, int>,
    vector<pair<int, int>>,
    greater<pair<int, int>>
> pq;
 vector<int> res;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1)count++;
            }
                pq.push({count,i});
              }
         while(!pq.empty() && res.size()<k){
                res.push_back(pq.top().second);
                pq.pop();
              }
   return res;
    }
};