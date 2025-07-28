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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int count=0;
        
        if(head==NULL || head->next==NULL) return head;
        while(temp){
            temp=temp->next;
            count++;
        }
        k=k%count;
        count-=k;
        if(k==0) return head;
        ListNode* curr=head; ListNode* prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        ListNode* tail=curr;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        prev->next=NULL;
        tail->next=head;
        return curr;
        
    }
};