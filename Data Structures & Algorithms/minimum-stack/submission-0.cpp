class MinStack {
public:
    stack<int> myStack;
    std::multiset<int> ms;
    MinStack() {
    }
    
    void push(int val) {
        myStack.push(val);
        ms.insert(val);
    }
    
    void pop() {
        
        auto it = ms.find(myStack.top());
        if (it != ms.end()) {
            ms.erase(it);
        }
        myStack.pop();
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return *ms.begin();
    }
};
