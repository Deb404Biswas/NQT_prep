#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter array elements"<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        sum+=ele;
        arr.push_back(ele);
    }
    int pres=0,sufs=0;
    for(int i=1;i<n;i++)
    {
        pres+=arr[i-1];
        sufs=sum-arr[i]-pres;
        if(pres==sufs)
        {
            cout<<"The equilibrium index is "<<i<<"th index"<<endl;
            break;
        }
    }
}