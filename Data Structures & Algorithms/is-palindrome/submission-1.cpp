class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                temp.push_back(tolower(s[i]));
            }
        }
        int right = temp.length() - 1;
        int left = 0;
        while( left < right) {
            if(!(temp[left] == temp[right])){
                return false;
            }
            right--;
            left++;
        }
        return true;
    }
};
