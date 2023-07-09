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
    ListNode* deleteDuplicates(ListNode* head) {
        struct ListNode *p=head;
        struct ListNode *q=head;
       while(p){
       while( p && q && p->val==q->val){
           p=p->next;
       }
       q->next=p;
       q=p;
       if(p){
       p=p->next;
       }
       }
        return head;
    }
};
