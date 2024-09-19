#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    n=n>>31;
    if(n&1)
    cout<<"Negative"<<endl;
    else
    cout<<"Positive"<<endl;
}