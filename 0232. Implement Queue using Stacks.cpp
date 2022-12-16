class MyQueue {
public:
stack <int> input;
stack <int> output;
int PEEK=0;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty())
        PEEK=x;
        input.push(x);
    }
    
    int pop() {
        if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int val=output.top();
        output.pop();
        return val;
    }
    
    int peek() {
        if(output.empty())
        return PEEK;
        return output.top();
        
    }
    
    bool empty() {
        return(input.empty()&&output.empty());
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
