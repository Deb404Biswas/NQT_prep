#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int rev=0;
    for(int i=n;i>0;i=i/10)
    {
        int d=i%10;
        rev=(rev*10)+d;
    }
    if(rev==n)
    cout<<"Palindrome number";
    else
    cout<<"Not a palindrome number";
    cout<<endl;
}