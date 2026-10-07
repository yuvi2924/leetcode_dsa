class Solution {
public:

    bool valid(string s) {
        int count = 0;

        for(char c : s) {

            if(c == '(') {
                count++;
            }
            else if(c == ')') {
                count--;

                if(count < 0)
                    return false;
            }
        }

        return count == 0;
    }

    vector<string> removeInvalidParentheses(string s) {

        vector<string> ans;

        queue<string> q;
        unordered_set<string> vis;

        q.push(s);
        vis.insert(s);

        bool found = false;

        while(!q.empty()) {

            string curr = q.front();
            q.pop();

            // If valid, this is minimum removal level
            if(valid(curr)) {
                ans.push_back(curr);
                found = true;
            }

            // Don't generate next level after finding valid strings
            if(found)
                continue;

            // Remove one parenthesis
            for(int i = 0; i < curr.size(); i++) {

                if(curr[i] != '(' && curr[i] != ')')
                    continue;

                string next = curr.substr(0, i) + curr.substr(i + 1);

                if(vis.find(next) == vis.end()) {
                    vis.insert(next);
                    q.push(next);
                }
            }
        }

        return ans;
    }
};