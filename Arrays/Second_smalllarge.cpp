#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int mini=INT_MAX,maxi=INT_MIN;
    int smin,smax;
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i])
        {
            smin=mini;
            mini=arr[i];
        }
        if(maxi<arr[i])
        {
            smax=maxi;
            maxi=arr[i];
        }
    }
    cout<<"The second maximum is"<<smax<<" and the second minimum is"<<smin<<endl;
}