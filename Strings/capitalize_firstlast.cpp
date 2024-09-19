#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        int n=(int)s[i];
        if(i==0 || i==s.length()-1)
        {
            if(n>=97 && n<=122)
            {
                s[i]=(char)(n-32);
            }
        }
        else
        {
            if(s[i]==' ')
            {
                int n1=(int)s[i-1];
                int n2=(int)s[i+1];
                if(n1>=97 && n1<=122)
                s[i-1]=(char)(n1-32);
                if(n2>=97 && n2<=122)
                s[i+1]=(char)(n2-32);
            }
        }
    }
    cout<<"The new string :"<<s<<endl;
}