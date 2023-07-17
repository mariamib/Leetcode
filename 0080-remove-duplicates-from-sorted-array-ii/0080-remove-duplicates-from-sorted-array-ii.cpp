class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool check =false;
        for(int i=1 ;i<nums.size();i++)
        {

                if(nums[i]!=nums[i-1])  check=false;
                else if(check)
                   {
                        nums.erase(nums.begin() +i);
                        i--;
                   }
                else    check =true;

        }
        return nums.size();
    }
};