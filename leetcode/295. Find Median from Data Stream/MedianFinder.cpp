class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int> minheap;
    
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        minheap.push(-num);
        if(minheap.size() > maxheap.size()) {
            int temp = -(minheap.top());
            minheap.pop();
            maxheap.push(temp);
        } else {
            if(-(minheap.top()) < maxheap.top()) {
                int temp = maxheap.top();
                maxheap.pop();
                int temp2 = minheap.top();
                minheap.pop();
                minheap.push(-temp);
                maxheap.push(-temp2);
            }
        }
    }
    
    double findMedian() {
        if(minheap.size() < maxheap.size()) {
            return (double)(maxheap.top());
        } else {
            return ((double)(maxheap.top() - minheap.top()) / 2.0);
        }
    }
};