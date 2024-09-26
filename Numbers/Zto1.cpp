#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        s[i]='1';
    }
    n=stoi(s);
    cout<<"The converted number is "<<n<<endl;
}