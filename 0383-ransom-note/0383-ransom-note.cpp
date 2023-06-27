class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
          int counter=0;
        for(int i=0;i<ransomNote.size();i++)
        {
            for(int j=0;j<magazine.size();j++)
            {
                if(ransomNote[i]==magazine[j])
                   { magazine.erase(j,1);
                        counter++;
                        break;
                   }
            }
        }
        if(counter==ransomNote.size())
        return true;
        else
        return false; 
    }
};