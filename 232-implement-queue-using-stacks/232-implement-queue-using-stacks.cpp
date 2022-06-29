class MyQueue {
public:
    stack<int> st1, st2;
    int top;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(!st2.empty()){
            top = st2.top();
            st2.pop();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            top = st2.top();
            st2.pop();
        }
        
        return top;
    }
    
    int peek() {
         if(!st2.empty()){
            top = st2.top();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            top = st2.top();
        }
        
        return top;
    }
    
    bool empty() {
        if(st1.empty() && st2.empty()) return true;
        else return false;
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