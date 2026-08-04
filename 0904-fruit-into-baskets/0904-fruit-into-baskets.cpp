class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0;
        int low=0;
        unordered_map<int, int> mp;
        int n=fruits.size();
        for(int high=0;high<n;high++){
             mp[fruits[high]]++;
            while(mp.size()>2){
            mp[fruits[low]]--;
            if( mp[fruits[low]]==0){
         mp.erase(fruits[low]);
            }
            low++;}
                ans=max(ans,high - low + 1);
        } 
        return ans;
    }
};