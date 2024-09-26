#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        sum+=d;
    }
    if(n%sum==0)
    cout<<n<<" is a harshad number"<<endl;
    else
    cout<<n<<" is not a harshad number"<<endl;
}