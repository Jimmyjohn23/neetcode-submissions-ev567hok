class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> string_map;
        for (string s : strs) {
            int count_arr[256] = {0};
            for (char c : s) {
                count_arr[c]++;
            }
            // Convert count array into a string key
            string key(count_arr, count_arr + 256);
            string_map[key].push_back(s);
        }
        
        vector<vector<string>> result;
        for (auto& pair : string_map) {
            result.push_back(pair.second);
        }
        return result;
    }
};
