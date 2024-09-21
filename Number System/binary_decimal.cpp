#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int ans=0,base=1;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]=='1')
        {
            ans=ans+base;
        }
        base*=2;
    }
    cout<<"The decimal equivalent : "<<ans<<endl;
}