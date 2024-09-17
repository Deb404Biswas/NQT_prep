#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    getline(cin,s);
    int str=0,end=s.length()-1;
    while(str<end)
    {
        swap(s[str++],s[end--]);
    }
    cout<<"The new string :"<<s<<endl;
}