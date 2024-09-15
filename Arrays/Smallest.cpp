#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mini>arr[i])
        mini=arr[i];
    }
    cout<<"The minimum of the array is :"<<mini<<endl;
}