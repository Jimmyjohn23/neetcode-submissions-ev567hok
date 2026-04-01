class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> result(n);

        int p0 = 1;
        for(int i = 0; i < nums.size(); i++) {
            left[i] = p0;
            p0 *= nums[i];
        }
        int p1 = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            right[i] = p1;
            p1 *= nums[i]; 
        }
        for(int i = 0; i < nums.size(); i++){
            result[i] = left[i] * right[i];
        }
        return result;
    }
};