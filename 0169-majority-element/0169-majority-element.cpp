class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int num=0, max = 0, counter=0, max_num=0;
	sort(nums.begin(), nums.end());
	num = nums[0];
	for (int i=0;i<nums.size();i++)
	{	
		if (num != nums[i])
		{
			if (counter > max)
			{
				max = counter;
				max_num = num;
			}
			num = nums[i];
			counter = 1;
		}
		else
			counter++;
		if (i == nums.size() - 1&&counter>max)
		{
			max = counter;
			max_num = num;
		}
	}
        return max_num;
    }
};