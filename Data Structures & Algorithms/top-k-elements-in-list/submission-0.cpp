class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: count frequencies
        unordered_map<int, int> freq;
        for (int n : nums) freq[n]++;

        // Step 2: min-heap ordered by frequency
        // pair<freq, value> — heap pops the LOWEST freq first
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        for (auto& [val, count] : freq) {
            pq.push({count, val});
            if (pq.size() > k) pq.pop(); // evict least frequent
        }

        // Step 3: collect results
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};