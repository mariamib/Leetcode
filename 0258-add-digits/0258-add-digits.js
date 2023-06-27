/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    num=num.toString();
    while(num.length!==1)
    {
         let ans =0;
        for(let c of num)
            ans+= +(c);
        num=ans.toString();
    }
    return  +num;
};