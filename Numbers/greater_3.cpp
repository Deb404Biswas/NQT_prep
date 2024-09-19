#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"Greatest: "<<max(a,max(b,c))<<endl;
}