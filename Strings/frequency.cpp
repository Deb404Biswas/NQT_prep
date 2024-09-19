#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    getline(cin,s);
    vector<int>arr(26,0);
    for(auto it:s)
    {
        arr[(char)((int)it-97)]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
        {
            cout<<"Letter: "<<(char)(i+97)<<" Frequency: "<<arr[i]<<endl;
        }
    }
}