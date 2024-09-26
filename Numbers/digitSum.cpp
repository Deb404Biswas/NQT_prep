#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        s+=d;
    }
    cout<<"Sum of digits : "<<s<<endl;
}