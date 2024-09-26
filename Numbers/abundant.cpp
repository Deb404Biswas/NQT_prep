#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=0;
    int cp=n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(i==(n/i))
            sum+=i;
            else
            {
                sum = sum + i;
                sum = sum + (n / i);
            }
            
        }
    }
    sum-=n;
    if(sum>n)
    cout<<n<<" is an abundant number"<<endl;
    else
    cout<<n<<" is not an abundant number"<<endl;
}