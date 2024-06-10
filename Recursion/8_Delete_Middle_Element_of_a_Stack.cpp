//Without recursion

void deleteMid(stack<int>&s, int sizeOfStack)
    {
       stack<int>temp;
        vector<int>v;
       
        int size = floor((sizeOfStack+1)/2);
       for(int i=1;i<size;i++){
             temp.push(s.top());
            s.pop();
       }
       s.pop();
       
       while (!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }
    }

//with recursion


  void deleteMid(stack<int>&s,int count ,int pos){
        if(s.empty()){
            return ;
        }
        if(count==pos){
            s.pop();
            return ;
        }
        
        int top = s.top();
        s.pop();
        deleteMid(s,count+1,pos);
        s.push(top);
    }
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int size = ceil((sizeOfStack+1)/2.0);
        int count = 1;
        deleteMid(s,count,size);
    }
