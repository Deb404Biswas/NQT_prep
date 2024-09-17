#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            s=s.substr(0,i)+s.substr(i+1);
            i--;
        }
    }
    cout<<"The new string after removing the vowels is as follows:"<<endl;
    cout<<s<<endl;
}