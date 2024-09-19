#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    vector<int>arr(26,0);
    getline(cin,s);
    for(auto it:s)
    {
        arr[((int)it-97)]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        cout<<(char)(i+97)<<" ";
    }
}