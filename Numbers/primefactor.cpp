#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        while(n%i==0)
        n=n/i;
    }
    if(n!=1)
    cout<<n<<" ";
    cout<<endl;
}