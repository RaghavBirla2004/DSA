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

 //Better Approach
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode*a=l1,*b=l2,*ans=new ListNode(0) ;
         ListNode*curr = ans;
         long long carry = 0;
          while(a!=NULL ||  b!=NULL){
            long long x,y;
            if(a!=NULL){
                x =a->val;
            }
            else{
                x=0;
            }

            if(b!=NULL){
                y = b->val;
            }
            else{
                y=0;
            }
            long long sum = carry + x+y;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;

            if(a!=NULL){
                a=a->next;
            }
            if(b!=NULL){
                b = b->next;
            }
          }
          if(carry > 0){
            curr->next = new ListNode(carry);
          }
          return ans->next;

    }
};

//class Solution {
// public:
// int find(struct ListNode*head){
//     struct ListNode*temp = head;
//     long long num = 0;
//     while(temp!=NULL){
//          num = num*10 + temp->val;
//          temp = temp->next;
//     }

//     string n = to_string(num);
//     reverse(n.begin(),n.end());
//     long long  reversed = stoll(n);
//     return reversed;
//  }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//           long long num1 = find(l1);
//     long long num2 = find(l2);
//     long long sum = num1+num2;
//     string rev = to_string(sum);
//     reverse(rev.begin(),rev.end());
    

//     ListNode * temp = new ListNode(0);
//     ListNode*curr = temp;

//     for(char x:rev){
//     temp->next = new ListNode(x - '0');
//     temp = temp->next;
//     } 
//     return curr->next;
//     }
// };
