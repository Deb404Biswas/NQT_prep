#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a binary number"<<endl;
    cin>>s;
    string res="";
    int n=s.length();
    if(n%3==1)
    s="00"+s;
    else if(n%3==2)
    s='0'+s;
    for(int i=0;i<n;i=i+3)
    {
        int sum=(s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0')*1;
        res+=to_string(sum);
    }
    cout<<"The octal equivalent is "<<res<<endl;
}