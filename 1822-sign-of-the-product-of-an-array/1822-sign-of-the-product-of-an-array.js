/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    let num,first=true;
    for(let n in nums)
    {
        if(first){
            num=nums[n];
            first=false;
        }
        else
        num*=nums[n];
    }
    if(num<0)
        return -1;
    if(num>0)
        return 1;
    else
        return 0;
};