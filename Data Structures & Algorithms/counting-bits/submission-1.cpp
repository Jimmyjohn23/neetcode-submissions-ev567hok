class Solution {
   public:
    vector<int> countBits(int n) {
       vector<int> result(n + 1);
        result[0] = 0;
        
        for (int i = 1; i <= n; i++) {
            result[i] = result[i >> 1] + (i & 1);
        }
        
        return result;
    }
    // int countOne(int n) {
    //     int count = 0;
    //     while (n) {
    //         n &= (n - 1);
    //         count++;
    //     }
    //     return count;
    // }
};
