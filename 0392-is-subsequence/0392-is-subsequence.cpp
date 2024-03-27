class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,count=0;
        for(int i=0;i<s.length();i++){
            while(j<t.length()){
                if(t[j]==s[i]){
                    count++,j++;
                     break;
                }
                j++;
            }
            if(j==t.length())
                break;
        }
        cout<<count;
        if(count==s.length()|| s=="")
            return true;
        return false;
    }
};