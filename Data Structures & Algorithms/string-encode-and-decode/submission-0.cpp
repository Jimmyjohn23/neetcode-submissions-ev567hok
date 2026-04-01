class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(const string& s : strs){
            string shifted = "";
            for(unsigned char c : s){
                shifted += (unsigned char)(c + 1);

            }
            result += shifted + '\x00';
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string current = "";
        for (int i = 0; i < s.size(); i++){
            if((unsigned char)s[i] == 0x00) {
                string unshifted = "";
                for(unsigned char c : current) {
                    unshifted += (unsigned char)(c - 1);

                } 
                result.push_back(unshifted);
                current = "";
            } else {
                current += s[i];
            }
        }
        return result;
    }
};
