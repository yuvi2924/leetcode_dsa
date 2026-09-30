class Solution {
public:
    int hIndex(vector<int>& citations) {

        int lo = 0;
        int n = citations.size();
        int hi = n-1;
        int h = 0;
        int papers = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            papers = n - mid;
            if (citations[mid] >= papers) {
                h = papers;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return h;
    }
};