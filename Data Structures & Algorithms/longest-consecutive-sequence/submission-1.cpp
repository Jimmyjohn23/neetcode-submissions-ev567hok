class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> temp(nums);
        sort(temp.begin(), temp.end());
    
        int longest = 0, count = 1;
        for(int i = 1; i < temp.size(); i++) {
            if(temp[i] == temp[i-1] + 1) {
                count++;
            } else if(temp[i] == temp[i-1]) {
                continue;
            } else {
                longest = max(longest, count);
                count = 1;
            }
        }
        return max(longest, count);
    }
};
