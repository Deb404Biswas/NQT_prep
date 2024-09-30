#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cout<<"Enter a string and k distinct elements"<<endl;
    cin>>s;
    cin>>k;
    map<char,int>mp;
    int l=0,r=0,maxlen=0;
    while(r<s.length())
    {
        mp[s[r]]++;
        while(mp.size()>k)
        {
            mp[s[l]]--;
            if(mp[s[l]]==0)
            mp.erase(s[l]);
            l++;
        }
        if(mp.size()<=k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        ++r;
    }
    cout <<"The maximum subarray with k distinct subarray is "<<maxlen<<endl;
}