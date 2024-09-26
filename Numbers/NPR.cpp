#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;
    int pro=1;
    for(int i=n;i>=n-r+1;i--)
    pro*=i;
    cout<<"nPr:"<<pro<<endl;
}