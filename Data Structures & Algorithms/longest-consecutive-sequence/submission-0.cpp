class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_map<int, int> mp;
    // Store all numbers
    for (int x : nums) {
        mp[x] = 1;
    }
    int longest = 0;
    for (int x : nums) {
        // x is the beginning only if x-1 is absent
        if (mp.find(x - 1) == mp.end()) {
            int current = x;
            int length = 1;
            while (mp.find(current + 1) != mp.end()) {
                current++;
                length++;
            }
            longest = max(longest, length);
        }
    }
    return longest;
        
    }
};
