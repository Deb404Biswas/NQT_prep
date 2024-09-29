#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6]={4,1,6,8,5,1};
    int min1=INT_MAX,min2=INT_MAX;
    for(auto it:arr)
    {
        if(it<min1)
        {
            min2=min1;
            min1=it;
        }
    }
    cout<<min2<<endl;
}