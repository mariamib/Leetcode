using namespace std;
#include<iostream>
#include<string>
class Solution {
public:
    vector<int> plusOne(vector<int>& vec) {
        
    vector<int>::reverse_iterator i = vec.rbegin();
    for (i; i != vec.rend(); ++i) {
        if (*i >= 9)
            *i = 0;
        else
        {
            *i += 1;
            break;
        }
    }
    if(vec.front() == 0)
        vec.insert(vec.begin(), 1);

        return vec;
    }
};