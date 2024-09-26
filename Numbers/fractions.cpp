#include<iostream>
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
    int n1,d1,n2,d2;
    cout<<"Enter first n,d and second n,d"<<endl;
    cin>>n1>>d1>>n2>>d2;
    int lcm=(d1*d2)/gcd(d1,d2);
    int n3,d3=lcm;
    n3=n1*(d3/d1) + n2*(d3/d2);
    cout<<"Result is "<<n3<<"/"<<d3<<endl;
}