/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> checkMap;
        ListNode *temp = head;
        
        while(temp!=NULL){
            if(checkMap[temp]==1){
                return true;
            }
            else{
                checkMap[temp]++;
            }
            
            temp = temp->next;
        }
        
        return false;
    }
};
