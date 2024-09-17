#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==')' || s[i]=='(')
        {
            s=s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }
    cout<<"the modified string : "<<s<<endl;
}