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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        

        if(n == len){// as the last node from len size will be the head to be deleted
      ListNode* headToDelete=head;
      head=head->next;
      delete headToDelete;
      return head;
        }
        temp=head;
        for(int i=0;i<len-n-1;i++){
            temp=temp->next;
        }

        ListNode* nodeToDelete=temp->next;
        temp->next=temp->next->next;
        delete nodeToDelete;
        return head;
    }
};