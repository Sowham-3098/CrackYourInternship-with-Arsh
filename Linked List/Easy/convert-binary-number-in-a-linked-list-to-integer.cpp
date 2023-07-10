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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        ListNode* temp=head;
        string str="";
        
        while(temp!=NULL){
            str+=to_string(temp->val);
            temp=temp->next;
        }
        int sum=0;
        reverse(str.begin(),str.end());
        for(int i=str.length()-1;i>=0;i--){
            int h=str[i]-'0';
            sum+=h*pow(2,i);
        }
        
        return sum;
    }
};
