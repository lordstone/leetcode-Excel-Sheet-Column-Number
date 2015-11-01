class Solution {
public:
    int titleToNumber(string s) {
        int tmp = 0;
        for(int i = 0; i < s.length(); i++){
            tmp *= 26;
            tmp += s[i] - 'A' + 1;
        }
        return tmp;
    }
};
