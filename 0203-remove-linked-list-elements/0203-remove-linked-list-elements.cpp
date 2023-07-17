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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
           while(head!=NULL && head->val==val) head=head->next;
            ListNode *tmp=head;
            while(tmp!=NULL && tmp->next!=NULL)
            {
                if(tmp->next->val==val) {
                    ListNode* toDelete = tmp->next;
                    tmp->next=tmp->next->next;
                        delete(toDelete);
                    }
                else tmp=tmp->next;
            }
         return head;
        }
};