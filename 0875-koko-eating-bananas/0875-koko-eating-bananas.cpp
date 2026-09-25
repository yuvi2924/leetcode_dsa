class Solution {
public:
    long long  fun(vector<int>& a,int n, int speed){
        long long hi=0;
        for(int i=0;i<n;i++){
            hi=hi+a[i]/speed;
            if(a[i]%speed!=0){
                hi++;
            }
        }
          return hi;
     }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxarr=0;
        for(int i=0;i<piles.size();i++){
          if(maxarr<piles[i]){
            maxarr=piles[i];
          }
        }
         int lo=1;
         int hi=maxarr;
         int res=-1;
         while(lo<=hi){
            int guess=(lo+hi)/2;
          long long  hour=fun(piles,piles.size(),guess);
          if(hour>h) //no{
          lo=guess+1;
          else{
            res=guess;
            hi=guess-1;
          }
         }
              return res; 
    }
        
};