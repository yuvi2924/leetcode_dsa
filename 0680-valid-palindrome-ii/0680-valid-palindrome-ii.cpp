class Solution {
public:
    bool check(string &s,int left,int right){
           while(left<right){
         if(s[left] != s[right]){
            return false;}
        left++;
        right--;}
  return true;
    }
    bool validPalindrome(string s) {
    int left=0;
    int right=s.size()-1;
   while(left < right) {

    if(s[left] == s[right]) {
        left++;
        right--;
    }
    else {

        if(check(s, left + 1, right))
            return true;

        if(check(s, left, right - 1))
            return true;

        return false;
    }
}
return true;
        return true;
    }
};