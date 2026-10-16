class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string, vector<string>> mp1;
       for(int i=0;i<strs.size();i++){
        string s=strs[i];
        sort(s.begin(),s.end());
        mp1[s].push_back(strs[i]);
       }
       vector<vector<string>> res;
       for(auto it :mp1){
        res.push_back(it.second);
       }
   return res;
    }
};