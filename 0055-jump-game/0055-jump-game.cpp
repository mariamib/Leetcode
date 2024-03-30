class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0, j=nums[i];
        while(i<nums.size() && nums.size()!=1){
            if(nums[i]>j)
                j=nums[i];
            if(i==nums.size()-1 && j>=0)
                return true ;
            if(nums[i] ==0 && j==0)
               return false;
            cout<<i<<j;
           j--, i++;
        }
        return 1;
    }
};