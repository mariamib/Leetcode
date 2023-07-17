/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *tmp =head;
        stack<int>s;
        while(tmp!=NULL) 
        {
            s.push(tmp->val);
            tmp = tmp->next;
        }
        while(head!=NULL)
        {
            if(head->val != s.top())
                return false;
            s.pop();
            head = head->next;
        }
        return true;
    }
};