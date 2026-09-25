class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
              /*yuvi sharma
              2420954
              R&Ai(5th sem)*/
        for (char ch : tasks) {
            freq[ch - 'A']++;
        }
        int maxFreq = 0;

        for (int f : freq) {
            maxFreq = max(maxFreq, f);
        }
             /*yuvi sharma
              2420954
              R&Ai(5th sem)*/
        int countMax = 0;

        for (int f : freq) {
            if (f == maxFreq) {
                countMax++;
            }
        }
                    /*yuvi sharma
              2420954
              R&Ai(5th sem)*/
        int ans = (maxFreq - 1) * (n + 1) + countMax;
        return max((int)tasks.size(), ans);
    }
};