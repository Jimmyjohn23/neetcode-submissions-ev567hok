class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int vec_lenght = nums.size();
        set<int> mySet(begin(nums),end(nums));
        int set_lenght = mySet.size();
        return set_lenght != vec_lenght;
    }
};