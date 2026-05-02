class MyQueue 
{
public:
    std::deque<int> qu;
    MyQueue() 
    {
        
    }
    
    void push(int x) 
    {
        qu.push_back(x);
    }
    
    int pop() 
    {
        int temp = 0;
        if (!qu.empty())
        {
            temp = qu.front();
            qu.pop_front();
        }
        return (temp);
    }
    
    int peek() 
    {
        return (qu.front());
    }
    
    bool empty() 
    {
        return (qu.empty());
    }
};
