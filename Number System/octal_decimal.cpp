#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a octal number"<<endl;
    cin>>s;
    int base=1;
    int sum=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        sum+=(s[i]-'0')*base;
        base*=8;
    }
    cout<<"The equivalent decimal representation is "<<sum<<endl;
}