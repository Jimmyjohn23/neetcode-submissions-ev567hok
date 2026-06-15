class Solution {
   public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result = digits;
        *(result.end()-1) += 1;
        // for(const auto& num : result){
        //     cout << num << endl;
        // }
        int place = result.size() - 1;
        while(place != 0) {
            if(result[place] == 10){
                result[place] = 0;
                result[place - 1] += 1;
            }
            place--;
        }
        if(result[0] == 10){
            result[0] = 0;
            result.insert(result.begin(), 1) ;
        }
        return result;
    }
};

