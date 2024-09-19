#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    string temp="";
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            temp+=s[i];
        }
        else
        {
            sum+=atoi(temp.c_str());
            temp="";
        }
    }
    cout<<"The sum :"<<sum+atoi(temp.c_str())<<endl;
}