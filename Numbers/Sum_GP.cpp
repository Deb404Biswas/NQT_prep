#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,r,n,s=0.0;
    cout<<"Enter a,r,n"<<endl;
    cin>>a>>r>>n;
    if(r>1)
    s=(a*(pow(r,n)-1))/(r-1);
    else
    s=(a*(1-pow(r,n)))/(1-r);
    cout<<"Sum:"<<s<<endl;
}