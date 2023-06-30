class Solution {
public:
    int missingNumber(vector<int>& vec) {
sort(vec.begin(), vec.end());
	for (int i=0;i<vec.size();i++)
	{
		if (vec[i] != i)
			return i;
	}
	return vec[vec.size()-1] + 1;
    }
};