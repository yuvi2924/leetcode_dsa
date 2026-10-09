class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for (char ch : s) {
            //check char 1 by 1 and compare ab and cd present thn pop it
            if (!st.empty() && ((st.top() == 'A' && ch == 'B') ||
                                (st.top() == 'C' && ch == 'D'))) {
                st.pop();
                //else push further
            } else {
                st.push(ch);
            }
        }//return size
        return st.size();
    }
};