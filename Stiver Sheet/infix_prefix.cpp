#include<iostream>
#include<stack>
#include<algorithm>
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
    string s;
    cout<<"Enter infix expression"<<endl;
    cin>>s;
    reverse(s.begin(),s.end());
    for(auto it:s)
    {
        if(it=='(')
        it=')';
        else if(it==')')
        it='(';
    }
    int i=0;
    string res="";
    stack<char>st;
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
            st.pop();
        }
        else
        {
            if(s[i]=='^')
            {
                while(!st.empty() && (priority(s[i]) <= priority(st.top())))
                {
                    res+=st.top();
                    st.pop();
                }
            }
            else
            {
                while(!st.empty() && (priority(s[i]) < priority(st.top())))
                {
                    res+=st.top();
                    st.pop();
                }
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
    reverse(res.begin(),res.end());
    cout<<"The prefix expression : "<<res;
}