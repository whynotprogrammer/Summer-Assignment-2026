class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        if (s.size() == 1) return 1;
        int i, j, maxi;
        i = j = maxi = 0;
        while (j < s.size()) {
            m[s[j]]++;
            if (m.find(s[j]) != m.end()) {
                while (m[s[j]] != 1) {
                    if (s[i] != s[j]) {
                        m.erase(s[i]);
                    } 
                    else {
                        m[s[j]]--;
                    }
                    i++;
                }
            }
            maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};
