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
   ListNode *reverselinkedlist(ListNode *head){
    ListNode *curr=head;
    ListNode *next=NULL;
    ListNode *prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
return prev;
   }
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
       ListNode *fast=head;
ListNode *prev=NULL;
     if (head == NULL || head->next == NULL)
    return true;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        prev->next=NULL;
      ListNode *tail=reverselinkedlist(slow);
      
     while(tail!=NULL && head !=NULL){
        if(tail->val!=head->val){
            return false;
        }
        else{
            tail=tail->next;
            head=head->next;
        }
     }

      return true;  
    }
};