#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>arr;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int f,s;
        cin>>f>>s;
        arr.push_back({f,s});
    }
    map<int,int>mp;
    for(auto it:arr)
    {
        int f=it.first,s=it.second;
        if(mp.find(s)!=mp.end() && mp[s]==f)
        cout<<"{"<<f<<","<<s<<"}"<<endl;
        else
        mp[f]=s;
    }
}