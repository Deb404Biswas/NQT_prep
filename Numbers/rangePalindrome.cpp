#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    int rev=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        rev=(rev*10)+d;
    }
    if(rev==n)
    return true;
    return false;
}
int main()
{
    int str,end;
    cout<<"enter the range"<<endl;
    cin>>str>>end;
    for(int i=str;i<=end;i++)
    {
        if(isPalindrome(i))
        cout<<i<<" ";
    }
    cout<<endl;
}