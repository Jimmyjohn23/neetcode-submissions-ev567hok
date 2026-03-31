class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> my_set;
        for(int num : nums) {
            if(!my_set.insert(num).second)
                return true;
            
        }
        return false;
    }
};