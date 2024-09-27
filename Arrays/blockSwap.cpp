#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    int n,k;
    cout<<"Enter the size and position to be shifted"<<endl;
    cin>>n>>k;
    cout<<"Enter elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
    reverse(arr.begin(),arr.end());
    cout<<"The array after shifting is as follows:"<<endl;
    for(auto it:arr)
    cout<<it<<" ";
    cout<<endl;
}