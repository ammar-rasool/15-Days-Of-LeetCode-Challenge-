class MyQueue {
public:
    stack<int>st1;

    MyQueue() {

    }
    
    void push(int x) {
        st1.push(x);
        stack<int> s_copy = st1;
        stack<int>st2;        
        while(!s_copy.empty()){
            st2.push(s_copy.top());
            s_copy.pop();
        }
    }
    
    int pop() {
        stack<int> s_copy = st1;
        stack<int>st2;        
        while(!s_copy.empty()){
            st2.push(s_copy.top());
            s_copy.pop();
        }
        int element = st2.top();
        st2.pop();
        while(!st2.empty()){
            s_copy.push(st2.top());
            st2.pop();
        }
        st1 = s_copy;
        return element;
        
    }
    
    int peek() {
        stack<int> s_copy = st1;
        stack<int>st2;        
        while(!s_copy.empty()){
            st2.push(s_copy.top());
            s_copy.pop();
        }
       return st2.top();
    }
    
    bool empty() {
        bool isEmpty = (st1.empty())?true:false;
        return isEmpty;
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