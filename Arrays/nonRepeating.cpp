#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array and the elements in the array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    map<int,int>mp;
    for(auto it:arr)
    mp[it]++;
    cout<<"The non repeating numbers in an array are as follows:"<<endl;
    for(auto it:mp)
    if(it.second==1)
    cout<<it.first<<" ";
    cout<<endl;
}