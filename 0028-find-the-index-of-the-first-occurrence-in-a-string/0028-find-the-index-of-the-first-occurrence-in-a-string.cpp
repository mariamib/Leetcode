
class Solution {
public:
    int strStr(string str, string s) {
       if (str.find(s) != string::npos)
            return  str.find(s);
    else
        return -1; 
    }
};