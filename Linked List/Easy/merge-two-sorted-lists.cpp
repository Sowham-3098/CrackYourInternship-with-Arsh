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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* anshead=NULL;
        ListNode* it=NULL;
        ListNode* l1p=list1;ListNode* l2p=list2;
        while(l1p!=NULL && l2p!=NULL)
        {
            if(l1p->val>l2p->val)
            {
                if(anshead==NULL)
                {
                    anshead=l2p;
                    it=anshead;
                    l2p=l2p->next;
                    continue;
                }
                it->next=l2p;
                l2p=l2p->next;
                it=it->next;
            }
            else
            {
                if(anshead==NULL)
                {
                    anshead=l1p;
                    it=anshead;
                    l1p=l1p->next;
                    continue;
                }
                it->next=l1p;
                l1p=l1p->next;
                it=it->next;
            }
        }
        while(l1p!=NULL)
        {
            if(anshead==NULL)
            {
                anshead=l1p;
                it=anshead;
                l1p=l1p->next;
                continue;
            }
            it->next=l1p;
            l1p=l1p->next;
            it=it->next;
        }
        while(l2p!=NULL)
        {
            if(anshead==NULL)
            {
                anshead=l2p;
                it=anshead;
                l2p=l2p->next;
                continue;
            }
            it->next=l2p;
            l2p=l2p->next;
            it=it->next;
        }
        return anshead;
    }
};
