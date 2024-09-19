#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
            if(i==1 || i*i==n)
            {
                sum+=i;
            }
            else
            {
                sum+=i+(n/i);
            }
    }
    if(sum==n)
    cout<<"Perfect"<<endl;
    else
    cout<<"Not perfect"<<endl;
}