#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int c=0;
    for(int i=n;i>0;i=i/10)
    c++;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        sum+=pow(d,c);
    }
    if(sum==n)
    cout<<"Armstrong"<<endl;
    else
    cout<<"Not armstrong"<<endl;
}