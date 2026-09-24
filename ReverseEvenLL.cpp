class Solution {
public:
    ListNode* reverse(ListNode* a,ListNode* b){
        ListNode* prev=NULL;
        ListNode* curr=a;
        ListNode* Next=a;
        while(curr!=b){
            Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        int n=1;
        int l=0;
        ListNode* temp=head;
        ListNode* a=head;
        ListNode* b=head;
        ListNode* c=NULL;
        ListNode* prev=NULL;
        while(temp){
            a=temp;
            l=0;
            for(int i=1;temp!=NULL&&i<n+1;i++){
                temp=temp->next;
                l++;
            }
            b=temp;
            if(l%2==0){c=reverse(a,b);
            if(prev!=NULL){
            prev->next=c;}
            a->next=b;
            prev=a;
            if (head==a)head=c;}
            else{
                if(prev!=NULL){
                    prev->next=a;
                }
                prev=a;
                while(prev->next!=b){
                    prev=prev->next;
                }
            }
            n++;
        }
        return head;
    }
};