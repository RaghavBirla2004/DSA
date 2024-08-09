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
int size(ListNode*head){
    ListNode*temp = head;
    int s = 0;
    while(temp!=NULL){
        s++;
        temp = temp->next;
    }
    return s;
}
    ListNode* rotateRight(ListNode* head, int k) {

        //Better Apporach

       if(head==NULL){
        return head;
       }
       int n = size(head); 
       int loop = k%n;
       loop = n-loop;

       if(n==1 || loop ==n){
        return head;
       }
       int j=0;
       ListNode*temp = head;
       ListNode*first = head;
       while(temp!=NULL){
        j++;
        if(j==loop){
first = temp->next;
temp->next = NULL;
break;
        }
        temp= temp->next;
       }

       temp = first;
       while(temp->next!=NULL){
        temp = temp->next;
       }
       temp->next =head;
       return first;

 

//         vector<int>nums;
//         ListNode*temp = head;;
//         while(temp!=NULL){
//           nums.push_back(temp->val);
//           temp = temp->next;
//         }

//           int n= nums.size();
//        k = k % n; 
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());

// ListNode*curr = new ListNode(nums[0]);
// ListNode*h = curr;


//         for(int i=1;i<nums.size();i++){
//           curr->next = new ListNode(nums[i]);
//           curr = curr->next;
//         }
//         return h;

    }
};
