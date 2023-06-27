/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0)
        return false;
    else
    {
        x=x.toString();
        for(let i=0;i<=x.length/2;i++)
        {
            if(x.length%2!==0&&i===(x.length/2))
                break;
            if(x[i]!==x[x.length-i-1])
                return false;
        }
    }
    return true;
};