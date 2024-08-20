class MyQueue {
    stack<int>st0;
    stack<int>st1;
public:
    MyQueue() {

    }
    
    void push(int x) {
        while(!st0.empty()){
            st1.push(st0.top());
            st0.pop();
        }
        st1.push(x);
        while(!st1.empty()){
            st0.push(st1.top());
            st1.pop();
        }
        
    }
    
    int pop() {

        int x = st0.top();
        st0.pop();
        return x;
    }
    
    int peek() {
        return st0.top();
    }
    
    bool empty() {
        return st0.empty();
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