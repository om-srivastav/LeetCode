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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p=headB;
        ListNode* q=headA;
        while(p!=q){
            if(p==NULL)p=headA;
            else{
                p=p->next;
            }
            if(q==NULL)q=headB;
            else{
                q=q->next;
            }
        }
        return q;
    }
};