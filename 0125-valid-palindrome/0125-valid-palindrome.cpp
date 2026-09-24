class Solution {
public:
    bool isPalindrome(string s) {
        string clean="";
        for(char ch: s){
            if(isalnum(ch))//isalnum is use for taking all alphabets and nos value
            clean+=tolower(ch);//tolower convert into lower char
        }
        string c=clean;
        reverse(c.begin(),c.end());
        if(c==clean) return true;
        return false;
    }
 };