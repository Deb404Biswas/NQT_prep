#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Size of array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int s=0;
    for(auto it:arr)
    s+=it;
    cout<<"The sum is "<<s<<endl;
}