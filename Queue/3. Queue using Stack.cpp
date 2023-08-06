#include <bits/stdc++.h>
using namespace std;

// deQueue Operation:
    // If both stacks are empty then print error.
    // If stack2 is empty
    // while stackl is not empty, push everything from stackl to stack2.
    // Pop the element from stack2 and return it.


class Queue{

    stack<int>s1;
    stack<int>s2;

    public:
    void push(int x) { 
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Empty queue"<<endl;
            return -1;
        }

        if(s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            
        }
        int topval=s2.top();
        s2.pop();
        return topval;
    }

    bool empty()
    {
        if(s1.empty() and s2.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);

    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;




}