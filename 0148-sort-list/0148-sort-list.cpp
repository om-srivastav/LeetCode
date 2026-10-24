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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* dummy = new ListNode(-1);
        ListNode* i = a;
        ListNode* j=b;
        ListNode* k=dummy;
        while(i !=NULL && j!=NULL){
            if(i->val < j->val){
                k->next=i;// chote wlle ko uska next
                i=i->next;

            }
            else{
                k->next=j;
                j=j->next;
            }
            k=k->next;
        }
        if( i==NULL) k->next=j;
        else k->next=i;
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head ==NULL or head->next ==NULL) return head;
        // break the list into two halves
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next !=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        //at this point of time slow is at left middle/middle
        ListNode* head2=slow->next;
        slow->next =NULL;//list breaked 1-h to s and 2-head 2 to null
        head = sortList(head);
        head2 = sortList(head2);
        return mergeTwoLists(head,head2);
    }
};