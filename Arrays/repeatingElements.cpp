#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>mp;
    int n;
    cout<<"Enter the size of array and the elements of the array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    for(auto it:arr)
    {
        mp[it]++;
    }
    cout<<"The repeating elements are as follows:"<<endl;
    for(auto it:mp)
    if(it.second>1)
    cout<<it.first<<" ";
    cout<<endl;
}