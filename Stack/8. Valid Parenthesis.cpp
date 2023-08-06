#include <bits/stdc++.h>
using namespace std;


bool isvalid(string s)
{
    stack<char>st;

    for(auto x:s)
    {
        if(x=='(' || x=='{' || x=='[')st.push(x);
        else{
            if(x==')')
            {
                if(!st.empty()&&st.top()=='(')st.pop();
                else return false;
            }
            if(x=='}')
            {
                if(!st.empty()&&st.top()=='{')st.pop();
                else return false;
            }
            if(x==']')
            {
                if(!st.empty()&&st.top()=='[')st.pop();
                else return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin>>s;
    if(isvalid(s))cout<<"Valid"<<endl;
    else cout<<"Invalid"<<endl;

}