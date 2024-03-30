class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(k==0 || size==1)
            return;
        int rev = 0;
        while(k>=size)
            k%=size;
        auto start = nums.begin() + (size - k);
        vector<int> copy(start, nums.end());
        nums.erase(start, nums.end());
        nums.insert(nums.begin(), copy.begin(), copy.end());
    }
};