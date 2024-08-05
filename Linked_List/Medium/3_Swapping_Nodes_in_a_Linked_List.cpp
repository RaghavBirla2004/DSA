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
    ListNode* swapNodes(ListNode* head, int k) {

        //Better Approach

        ListNode*slow = head;
        ListNode*fast = head;
        while(--k){
            fast = fast->next;
        }
        ListNode*first = fast;

        while(fast->next!=NULL){
            fast= fast->next;
            slow = slow->next;
        }
        swap(slow->val,first->val);
        return head;

        // Naive Approach


//         int count = 0;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             count++;
//             temp = temp->next;
//         }
//  temp= head;
//         for(int i=0;i<k-1;i++){
//             temp = temp->next;
//         }
//         ListNode*first = temp;
//         temp = head;
//         for(int i=0;i<count - k;i++){
//             temp = temp->next;
            
//         }
//         ListNode*last = temp;
//         swap(first->val, last->val);
//         return head;


    }
};
