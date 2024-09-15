#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
            if(n/i!=i)
            c++;
        }
    }
    if(c==2)
    return true;
    return false;
}
int main()
{
    int str,end;
    cout<<"Enter range"<<endl;
    cin>>str>>end;
    for(int i=str;i<=end;i++)
    {
        if(isPrime(i))
        cout<<i<<" is Prime";
        else
        cout<<i<<" is not Prime";
        cout<<endl;
    }
}