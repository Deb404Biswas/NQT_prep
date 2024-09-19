#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter n,a,d of the ap series"<<endl;
    int a,d,n;
    cin>>n>>a>>d;
    cout<<"Sum :"<<(n/2)*(2*a + (n-1)*d);
}