#include<iostream>
#include<climits>
#include<vector>
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
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i])
        maxi=arr[i];
    }
    cout<<" The greatest number is : "<<maxi<<endl;
    
}