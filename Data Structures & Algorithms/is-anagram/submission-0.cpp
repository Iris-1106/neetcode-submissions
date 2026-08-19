class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> m;
        unordered_map<char, int> n;

        for (char val : s) {
            m[val]++;
        }

        for (char val : t) {
            n[val]++;
        }

        return m == n;
    }
};