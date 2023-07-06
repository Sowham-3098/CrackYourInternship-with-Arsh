class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        
        ListNode* current = head;
        ListNode* previousNode = NULL;
        ListNode* nextNode = NULL;
        
        while(current){
            nextNode = current->next;
            current->next = previousNode;
            previousNode = current;
            current = nextNode;
        }
        
        return previousNode;
    }
};
