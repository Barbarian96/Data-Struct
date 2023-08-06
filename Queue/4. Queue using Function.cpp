
// deQueue(x):
    // deQueue:
    // 1. If stackl is empty then print error.
    // 2. If stackl has only one element then return it.
    // 3. Recursively pop everything from the stackl, store the popped,
    // item in a variable res, push the res back to stackl and return res

#include <bits/stdc++.h>
using namespace std;

// deQueue Operation:
    // If both stacks are empty then print error.
    // If stack2 is empty
    // while stackl is not empty, push everything from stackl to stack2.
    // Pop the element from stack2 and return it.


class Queue{

    stack<int>s1;

    public:
    void push(int x) { 
        s1.push(x);
    }
    int pop(){
        if(s1.empty()){
            cout<<"Empty queue"<<endl;
            return -1;
        }

        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }

        int item=pop();
        s1.push(x);
        return item;



        
    }

    bool empty()
    {
        if(s1.empty())
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