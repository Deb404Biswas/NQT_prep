#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        c++;
    }
    if(c!=1)
    cout<<"Not prime"<<endl;
    else
    cout<<"Prime"<<endl;
}