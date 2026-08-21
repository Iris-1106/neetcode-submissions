class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequency
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        // Step 2: Put {frequency, number} into vector
        vector<pair<int, int>> v;
        for (auto p : freq) {
            v.push_back({p.second, p.first});
        }
        // Step 3: Sort by frequency (highest first)
        sort(v.begin(), v.end(),
             [](auto &a, auto &b) {
                 return a.first > b.first;
             });
        // Step 4: Take first k numbers
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};