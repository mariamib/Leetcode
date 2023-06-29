class Solution {
public:
    int singleNumber(vector<int>& vec) {
        
  sort(vec.begin(), vec.end());
	int num = vec[0], save = vec[0];
	bool duplicate = false;
	for (int i = 1; i < vec.size(); i++)
	{
		if (num == vec[i])
			duplicate = true;
		else if (i == vec.size() - 1 && duplicate)
			save = vec[i];
		else
		{
			if (!duplicate)
			{
				save = num;
				break;
			}
			num = vec[i];
			duplicate = false;
		}
		
	}
        return save;
    }
};