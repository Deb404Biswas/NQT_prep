#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&arr,int n)
{
    int l=0,r=n-1;
    while(l<r)
    {
        swap(arr[l++],arr[r--]);
    }
}
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
    cout<<"The original array is as follows:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
    reverse(arr,n);
    cout<<"The reverse of the array is as follows:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
}
