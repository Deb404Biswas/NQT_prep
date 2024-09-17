#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter string"<<endl;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(!(((int)s[i]>=97 && (int)s[i]<=122) || ((int)s[i]>=65 && (int)s[i]<=90)))
        {
            s=s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }
    cout<<"The new string : "<<s<<endl;
}