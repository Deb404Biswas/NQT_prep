#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vc=0,cc=0,bc=0;
    cout<<"Enter string"<<endl;
    string s;
    getline(cin,s);
    for(auto it:s)
    {
        if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u')
        vc++;
        else if(it==' ')
        bc++;
        else
        cc++;
    }
    cout<<"The vowel count is: "<<vc<<" and the consonant count is: "<<cc<<" and blank count is: "<<bc<<endl;
}