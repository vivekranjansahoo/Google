Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]





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
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode,*preNode=NULL;
        while(head){
            nextNode=head->next;
            head->next=preNode;
            preNode=head;
            head=nextNode;
        }
        return preNode;
    }
};
