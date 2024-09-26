#include<bits/stdc++.h>
using namespace std;

int gcd(int n1,int n2)
{
    while(n1>0 && n2>0)
    {
        if(n1>n2)
        {
            n1=n1%n2;
        }
        else
        {
            n2=n2%n1;
        }
        if(n1==0)
        return n2;
    }
    return n1;
}

int main()
{
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"The gcd/hcf of the two number are "<<gcd(n1,n2)<<endl;
}