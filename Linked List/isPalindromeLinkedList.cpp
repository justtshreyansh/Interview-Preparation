#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode * middle = slow;
        ListNode * curr = slow->next;
        
        ListNode * prev = NULL;
        while(curr!=NULL){
            ListNode * forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        ListNode * temp1 = head;
        ListNode * temp2 = prev;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return true;


    }
};