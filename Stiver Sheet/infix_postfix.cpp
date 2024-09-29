#include<iostream>
#include<stack>
using namespace std;
int priority(char ch)
{
    if(ch=='^')
    return 3;
    else if(ch=='*' || ch=='/')
    return 2;
    else if(ch=='-' || ch=='+')
    return 1;
    return 0;
}
int main()
{
    string s,res="";
    cout<<"Enter infix expression"<<endl;
    cin>>s;
    stack<char>st;
    int i=0;
    while(i<s.length())
    {
        if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9'))
        res+=s[i];
        else if(s[i]=='(')
        st.push(s[i]);
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();
        }
        else
        {
            while(!st.empty() && (priority(s[i]) <= priority(st.top())))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        i++;
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<"postfix expression: "<<res<<endl;
}