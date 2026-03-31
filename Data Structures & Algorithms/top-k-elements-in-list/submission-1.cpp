class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        for (int n : nums) freq[n]++;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        for (auto& [val, count] : freq) {
            pq.push({count, val});
            if (pq.size() > k) pq.pop(); 
        }

        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};