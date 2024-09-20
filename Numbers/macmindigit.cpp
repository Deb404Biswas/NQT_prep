#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        maxi=max(maxi,d);
        mini=min(mini,d);
    }
    cout<<"The max digit :"<<maxi<<","<<"The min digit :"<<mini<<endl;
}