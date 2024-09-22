#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size and elements of the array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)// 1 2 1 2 2 3 3
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    map<int,int>mp;
    for(auto it:arr)
    {
        mp[it]++;
    }
    for(auto it:mp)
    cout<<it.first<<" ";
    cout<<endl;
}