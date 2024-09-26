#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        a=a%b;
        else
        b=b%a;
        if(a==0)
        return b;
    }
    return a;
}
int main()
{
    int n1,n2;
    cout<<"Enter two number"<<endl;
    cin>>n1>>n2;
    cout<<"The LCM of the two number is "<<(n1*n2)/gcd(n1,n2)<<endl;;
}