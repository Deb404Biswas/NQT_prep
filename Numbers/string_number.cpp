#include<iostream>
using namespace std;
int factorial(int n)
{
    int pro=1;
    while(n>0)
    {
        pro*=n--;
    }
    return pro;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        sum+=factorial(d);
    }
    if(sum==n)
    cout<<"Strong number"<<endl;
    else 
    cout<<"Not a strong number"<<endl;
}