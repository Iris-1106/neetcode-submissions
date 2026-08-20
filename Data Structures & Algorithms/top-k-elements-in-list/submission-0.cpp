class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> res;
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    vector<pair<int,int>> freqList;
    for (const auto& pair : freq) {
        freqList.push_back(pair);
    }

    sort(freqList.begin(), freqList.end(), [](pair<int,int>& a, pair<int,int>& b) {
        return a.second > b.second;
    });

    for (int i = 0; i < k; i++) {
        res.push_back(freqList[i].first);
    }

    return res;
}
};
