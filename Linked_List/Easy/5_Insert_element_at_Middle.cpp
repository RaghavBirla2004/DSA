class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        
        int count = 0;
        Node*newnode= new Node(x);
        
        if(head==NULL){
            return newnode;
        }
        struct Node*temp = head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
            
        }
        
       int middle = (count+1)/2;
        
        temp =head;
        int i=0;
        while(i<middle-1){
            temp=temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
        
    }
};
