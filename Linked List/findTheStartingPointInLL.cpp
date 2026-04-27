class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode * slow = head;
        ListNode *fast = head;

        while(fast!=NULL && fast->next!=NULL){
            fast =fast->next->next;
            slow = slow->next;
            if(slow==fast) {
                ListNode * temp = head;
                while(temp!=slow){
                    slow = slow->next;
                    temp = temp->next;
                }
                return slow;
            }
        }

        return NULL;
    }
};