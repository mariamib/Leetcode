class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int counter=0,count=0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int j=0;j<accounts[i].size();j++)
                count+=accounts[i][j];
                if(count>counter)
                counter=count;
                count=0;
        }
        return counter;
    }
};