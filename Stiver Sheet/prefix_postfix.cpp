#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a prefix expression"<<endl;
    cin>>s;
    int i=s.length()-1;
    stack<string>st;
    while(i>=0)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        st.push(string(1,s[i]));
        else
        {
            string ch1=st.top();
            st.pop();
            string ch2=st.top();
            st.pop();
            string temp=ch1+ch2+string(1, s[i]);
            st.push(temp);
        }
        i--;
    }
    cout<<"The postfix expression : "<<st.top();
}