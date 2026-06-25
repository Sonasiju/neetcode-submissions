class MinStack {
public:
stack <int> s1;
        stack <int> s2;
    MinStack() {
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val<=s2.top() ) {
            s2.push(val);
            }
    }
    
    void pop() {
        if(  !s2.empty() && s2.top()==s1.top())
        {
            s2.pop();
        }
        if(!s1.empty())
        {
        s1.pop();
        }
       
    }
    
    int top() {
        if(!s1.empty())
        {
        return s1.top();
        }
    }
    
    int getMin() {
        if(!s2.empty()){
        return s2.top();
        }
        
    }
    
};
