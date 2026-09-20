class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a=head;
        ListNode* b=head;
        while(b!=NULL){
            while(b!=NULL&&b->val==a->val)b=b->next;
                a->next=b;
                a=b;
            }
        return head;
    }
};