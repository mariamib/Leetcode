class Solution {
public:
    int titleToNumber(string str) {
        
    int n = 0,i=1;
    for(char c : str)
    {
        n+= (c-64)*pow(26,str.size()-i);
        i++;
    }
    return n;
    }
};