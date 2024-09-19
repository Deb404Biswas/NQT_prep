#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    vector<int>arr(26,0);
    cout<<"Enter both the string"<<endl;
    getline(cin,s1);
    getline(cin,s2);
    int c=0;
    for(auto it:s1)
    {
        arr[it-'a']++;
    }
    for(auto it:s2)
    {
        arr[it-'a']--;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    cout<<"Not anagram"<<endl;
    else
    cout<<"Anagram"<<endl;
}