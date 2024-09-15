#include<iostream>
#include<vector>
#include<unordered_map>
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
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    mp[arr[i]]++;
    for(auto it:mp)
    {
        cout<<it.first<<" occured "<<it.second<<" times"<<endl;
    }
}