class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
 ListNode * temp=head;
 ListNode * current=head;
  ListNode *next=NULL;
  int count=0;
  if(head==NULL || head->next==NULL){
    return 0;
  }
  while(temp!=NULL){
    temp=temp->next;
    count++;
  }   
  
  int mid;
  mid=count/2;

  int pos=0;
  temp=head;
  while(pos<mid-1){
temp=temp->next;
pos++;
  }
  temp->next=temp->next->next;
  return head;

    }

};