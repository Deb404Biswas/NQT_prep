#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    map<char,int>mp;
    for(auto it:s)
    {
        mp[it]++;
    }
    cout<<"The non repeating characters are as follows:"<<endl;
    for(auto it:mp)
    if(it.second == 1)
    cout<<it.first<<" ";
    cout<<endl;
}