class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i <= nums.size(); i++){
            result += i;
        }
        for(const auto& num : nums){
            result -= num;
        }
        return result;
    }
};
