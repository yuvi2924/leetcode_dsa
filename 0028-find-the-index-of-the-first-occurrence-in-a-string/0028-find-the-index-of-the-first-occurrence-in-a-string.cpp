
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
            return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            int count = 0;

            for (int j = 0; j < needle.size(); j++) {
                if (haystack[i + j] == needle[j]) {
                    count++;
                } else {
                    break;
                }
            }

            if (count == needle.size())
                return i;
        }

        return -1;
    }
};
