class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min_k = 1;
        int max_k = *max_element(piles.begin(), piles.end());
        int ans = max_k;

        while (min_k <= max_k) {
            int mid_k = min_k + (max_k - min_k) / 2;

            long long hour_count = 0;
            for (int pile : piles) {
                hour_count += (pile + mid_k - 1) / mid_k; 
            }

            if (hour_count <= h) {
                ans = mid_k;   
                max_k = mid_k - 1;
            } else {
                min_k = mid_k + 1;
            }
        }

        return ans;
    }
};
