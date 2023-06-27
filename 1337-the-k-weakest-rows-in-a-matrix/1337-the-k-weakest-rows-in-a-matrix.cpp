class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        vector<pair<int,int>>vec;
        vector<int>v;
    for(int i=0;i<mat.size();i++)
    {
        int counter=0;
        for(int j=0;j<mat[i].size();j++)
        {
            if(mat[i][j] == 1)
                counter++;
        }
        vec.push_back( make_pair(counter,i) );
    }
    sort(vec.begin(),vec.end());
    for(const auto &i:vec)
    {
        v.push_back(i.second);
        k--;
        if(k==0)
        break;
    }
    return v;
    }
};