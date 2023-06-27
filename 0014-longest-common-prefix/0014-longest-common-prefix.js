/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let ans="";
   if(strs.length===0)
        return "";
    else if(strs.length===1)
        ans=strs[0];
    else
    {
        for(let i=0;i<strs[0].length;i++)
        {
            let check =true;
            for(let ii=1;ii<strs.length;ii++)
                {
                        if(strs[ii][i]!==strs[0][i])
                        {
                            check=false;
                            break;
                        }
                }
                if(check)
                    ans+=strs[0][i];
                else
                    break;
        }
    }
    return ans;
};