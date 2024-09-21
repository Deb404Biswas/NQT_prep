#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a decimal number"<<endl;
    cin>>n;
    string res="";
    while(n>0)
    {
        int r=n%8;
        res+=to_string(r);
        n=n/8;
    }
    reverse(res.begin(),res.end());
    cout<<"The octal representation is "<<res<<endl;
}