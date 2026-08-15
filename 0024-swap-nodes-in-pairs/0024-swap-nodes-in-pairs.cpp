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
    ListNode* swapPairs(ListNode* head) {
      ListNode* spare = new ListNode(0);
        spare->next=head;
        ListNode* prev=spare;
        while(prev->next && prev->next->next){
            ListNode* first=prev->next;
            ListNode* second=prev->next->next;
            first->next=second->next;
            second->next=first;
            prev->next=second;
            
            prev =first;
        }return spare->next;
    }
};