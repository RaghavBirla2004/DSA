class MyQueue {
public:
stack<int>st;
stack<int>temp;
    MyQueue() {
        
    }
    
    void push(int x) {
      st.push(x);
    

    }
    
    int pop() {
        int ele = peek();
        temp.pop();
        return ele;
    }
    
    int peek() {
     if(temp.empty()){
        while(st.empty()==false){
            temp.push(st.top());
            st.pop();
        }
     }
     return temp.top();
    }
    
    bool empty() {
       
        return st.empty() && temp.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
