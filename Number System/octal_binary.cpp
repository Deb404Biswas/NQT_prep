#include<bits/stdc++.h>
using namespace std;

string OcttoDec(string s)
{
    int sum=0,c=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        sum+=(s[i]-'0')*pow(8,c++);
    }
    return to_string(sum);
}

string DectoBin(string s)
{
    int n=stoi(s);
    string res="";
    while(n>0)
    {
        int r=n%2;
        res+=to_string(r);
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}

int main()
{
    string s;
    cout<<"Enter a octal number"<<endl;
    cin>>s;
    string octdec=OcttoDec(s);
    cout<<"The binary equivalent is "<<DectoBin(octdec);
}