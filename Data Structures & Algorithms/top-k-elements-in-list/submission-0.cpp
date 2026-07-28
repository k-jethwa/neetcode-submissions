class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;

        for (int num: nums) {
            freqs[num]++;
        }

        vector<pair<int, int>> count;
        for (const auto& item : freqs) {
            count.push_back({item.second, item.first});
        }
        sort(count.begin(), count.end());
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(count[count.size() - 1 - i].second);
        }

        return result;
    }
};
