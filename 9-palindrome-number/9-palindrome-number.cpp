class Solution {
public:
    bool isPalindrome(int x) {
        string a=to_string(x);
        string b=a;
        reverse(begin(b),end(b));
        if(a==b)return true;
        return false;
    }
};