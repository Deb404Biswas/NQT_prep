#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"The nth term till which the fibonacci series should be display??"<<endl;
    cin>>n;
    n=n-2;
    int first=0,second=1;
    cout<<"The fibonacci series is as follows:"<<endl;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<=n;i++)
    {
        int sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }
    cout<<endl;
}