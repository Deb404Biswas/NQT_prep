#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    string s;
    int flag=0;
    cout<<"Enter a grp of parenthesis"<<endl;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='{' || ch=='[')
        st.push(ch);
        else
        {
            if(st.top())
            {
                flag=1;
                break;
            }
            char t=st.top();
            if((t=='(' && ch==')') || (t=='{' && ch=='}') || (t=='[' && ch==']'))
            st.pop();
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    cout<<"Valid parenthesis"<<endl;
    else
    cout<<"Not valid parenthesis"<<endl;
}