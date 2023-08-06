#include <bits/stdc++.h>
using namespace std;


//PUSH Operation is costly 
class Stack{
    int N;
    queue<int>q1, q2;

    public:
    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);

    }
    void pop()
    {
        q1.pop();
        N--;
    }

    int top(){
        if(N!=0)return q1.front();
        else return -1;
    }

    int size()
    {
        return N;
    }




};

int main()
{
    Stack st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;
    st.pop();

    cout<<st.top()<<endl;


}