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
    ListNode *detectCycle(ListNode *head) {

        //Better Approach

        ListNode*slow = head,*fast = head, * entry = head;
        if(head==NULL){
            return head;
        }

        while(fast->next!=NULL && fast->next->next !=NULL){
           slow = slow->next;
           fast = fast->next->next;

           if(slow==fast){
             while(entry!=slow){
                entry = entry->next;
                slow = slow->next;
             }
             return slow;
           }
        }
        return NULL;
         

        //Naive Apporach
        

        // set<ListNode*>s;
        // ListNode*curr =head;
        // while(curr!=NULL){
        //     if(s.find(curr)!=s.end()){
        //         return curr;
        //     }
        //     else{
        //         s.insert(curr);
        //         curr = curr->next;
        //     }
        // }
        // return NULL;

    }
};
