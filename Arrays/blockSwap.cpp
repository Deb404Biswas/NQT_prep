#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cout<<"Enter a value of k and n and elements of array"<<endl;
    cin>>k;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    k=k%n;
    
}