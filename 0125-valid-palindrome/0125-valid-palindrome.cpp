class Solution {
public:
    bool isPalindrome(string word) {
        
 string s="";
	for (char c : word)
	{
		if (isalnum(c))
			s += tolower(c);
	}
	int left = 0, right = s.size()-1;
	while(right>left)
	{
		if (s[left] != s[right])
			return false;
		left++;
		right--;
	}
	return true;
    }
};