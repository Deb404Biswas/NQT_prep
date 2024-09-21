#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string res="";
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        res+=to_string(n%2);
        n=n/2;
    }
    reverse(res.begin(), res.end());
    cout<<"The binary equivalent: " <<res<<endl;
}
