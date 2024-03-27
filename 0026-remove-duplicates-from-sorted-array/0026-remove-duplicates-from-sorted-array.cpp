class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>copy;
        for(int i=0;i<nums.size();i++){
            if(i ==0 || copy.back()!=nums[i])
                copy.push_back(nums[i]);
        }
        nums=copy;
        return nums.size();
    }
};