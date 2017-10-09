class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        input.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int ret = peek();
        output.pop();
        return ret;
    }
    
    /** Get the front element. */
    int peek() {
        if(output.empty() == true) {
            move();
        }
        return output.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (input.empty() == true && output.empty() == true);
    }
private:
    void move() {
        while(input.empty() == false) {
            output.push(input.top());
            input.pop();
        }
    }
};