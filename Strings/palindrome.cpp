#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string"<<endl;
    cin>>s;
    int str=0,end=s.length()-1;
    int flag=0;
    while(str<end)
    {
        if(s[str]==s[end])
        {
            str++;
            end--;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"Is palindrome"<<endl;
    else
    cout<<"Is not a palindrome"<<endl;
}