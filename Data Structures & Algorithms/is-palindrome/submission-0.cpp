class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(char c : s){
            if(isalnum(c)) {
                temp.push_back(tolower(c));
            }
        }
        string temp2 = temp;
        reverse(temp.begin(), temp.end());
        return temp2 == temp;
    }
};
