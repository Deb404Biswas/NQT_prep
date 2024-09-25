#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sq=n*n;
    int f=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        int sq_d=sq%10;
        sq=sq/10;
        if(d!=sq_d)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    cout<<"Not a automorphic number"<<endl;
    else 
    cout<<"Automorphic number"<<endl;
}