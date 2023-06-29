class Solution {
public:
    vector<vector<int>> generate(int n) {
      
    vector<vector<int>> vec = { {1},{1,1} };
	vector<int> vec1;
	for (int i = 1; i < n-1; i++)
	{	
		vec1 = { 1 };
		for (int ii = 0; ii < vec[i].size() - 1; ii++)
			vec1.push_back(vec[i][ii] + vec[i][ii+1]);
		vec1.push_back(1);
		vec.push_back(vec1);
	}
        if (n == 1)
		vec.pop_back();
        return vec;
    }
};