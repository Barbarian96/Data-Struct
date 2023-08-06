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

    void pop(){
        if(q1.empty()){
            cout<<"Stack is empty"<<endl;
            return;
        }

        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        swap(q1,q2);
    }

    void push(int x){
        q1.push(x);
        N++;
    }

    int top(){
        if(q1.empty()) return -1;
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(ans);

        swap(q1,q2);

        return ans;

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

