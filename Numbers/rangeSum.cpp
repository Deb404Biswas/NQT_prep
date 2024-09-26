#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a range"<<endl;
    int l,r;
    cin>>l>>r;
    int tsum=0,fsum=0;
    tsum=(r*(r+1))/2;
    fsum=((l-1)*(l))/2;
    cout<<"Sum in the range : "<<tsum-fsum<<endl;
}