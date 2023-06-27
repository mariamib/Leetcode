class Solution {
public:
    string addBinary(string a, string b) {
        string  count = "", carry = "0", str;
	if(a.size()>b.size())
		b.insert(0, (a.size()-b.size()), '0');
	else
		a.insert(0, (b.size() - a.size()), '0');
	for (int i = a.size() - 1; i >= 0; i--)
	{
		str += a[i];
		str += b[i];
		str += carry[0];
		sort(str.begin(), str.end());
		if (str == "000")
			count += '0';
		else if (str == "111")
		{
			count += '1';
			carry = "1";
            if (i == 0)
				count += '1';
		}
		else if (str == "011")
		{
			count += '0';
			carry = '1';
			if (i == 0)
				count += '1';
		}
		else
		{	
				count += '1';
				carry = '0';
		}
		str = "";
	}
	reverse(count.begin(), count.end());
        return count;
    }
};