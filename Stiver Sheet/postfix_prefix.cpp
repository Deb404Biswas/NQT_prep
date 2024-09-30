#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>st;
    string s;
    cout<<"Enter a postfix expression"<<endl;
    cin>>s;
    int i=0;
    while(i<s.length())
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        st.push(string(1,s[i]));
        else
        {
            string ch1=st.top();
            st.pop();
            string ch2=st.top();
            st.pop();
            st.push(string(1, s[i])+ch1+ch2);
        }
        ++i;
    }
    cout<<"The prefix expression : "<<st.top();
}