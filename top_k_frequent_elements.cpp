class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int n : nums) {
            count[n]++;
        }
        vector<pair<int, int>> stuff;
        for (auto p : count) {
            stuff.push_back({p.second, p.first});
        }
        sort(stuff.begin(), stuff.end());
        reverse(stuff.begin(), stuff.end());
        vector<int> answer;
        for (int i = 0; i < k; i++) {
            answer.push_back(stuff[i].second);
        }
        return answer;
    }
};