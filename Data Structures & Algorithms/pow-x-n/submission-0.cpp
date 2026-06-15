class Solution {
   public:
    double myPow(double x, int n) {
        if (n == 0) {
            return (double)1.0;
        } else if (n == 1) {
            return x;
        }
        double result = 1;
        int absN = abs(n);
        for(int i = 0; i < absN; i++){
            result = result * x;
        }
        return n > 0 ? result : 1.0 / result;

    }
};
