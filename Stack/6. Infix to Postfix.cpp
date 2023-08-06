#include <bits/stdc++.h>
using namespace std;

// (a-b/c)*(a/k-l)
// • If operand
//     print
// • If '('
//     push to stack
// • If ')'
//     pop from stack and print until '(' is found
// . If operptor
//     pop from stack and print until an
//     operator with less precedence is found

int prec(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    else return -1;

}

string infixtopostfix(string s)
{
   stack<char>st;
   string res;
   for(int i=0;i<s.length();i++)
   {
    if(isalpha(s[i]))res.push_back(s[i]);
    else if(s[i]=='(')
    {
        st.push(s[i]);
    } 
    else if(s[i]==')')
    {
        while(!st.empty()&&st.top()!='(')
        {
            res+=st.top();
            st.pop();
        }
        if(!st.empty())
        {
            st.pop();
        }
    }
    else{
        while(!st.empty()&&prec(st.top())>prec(s[i])){
            res+=st.top();
            st.pop();
        }
        st.push(s[i]);
    }
   }

   while(!st.empty())
   {
    res+=st.top();
    st.pop();
   }

   return res;
}

int main()
{

    string s;
    cin>>s;
    cout<<infixtopostfix(s)<<endl;

}