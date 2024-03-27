class Solution {
public:
    int lengthOfLastWord(string str) {
        vector<string>v;
       string s;
    stringstream ss(str);
    while (getline(ss, s, ' ')) {
        if (!s.empty()) {  
                v.push_back(s);
            }
    }
 
        return  v[v.size()-1].length();
    }
};