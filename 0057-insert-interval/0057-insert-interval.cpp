class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        int i=0;
        int n=a.size();
    vector<vector<int>> res;
        // check
        while(i<n && a[i][1]<b[0]){
            res.push_back(a[i]);
            i++;
        }
        // 2nd condition
        while(i<n && a[i][0]<=b[1]){
            b[0]=min(b[0],a[i][0]);
            b[1]=max(b[1],a[i][1]);
            i++;
        }
        //add b
          res.push_back(b);
        //
        while(i<n){
             res.push_back(a[i]);
             i++;
        }
        return res;
    }
};