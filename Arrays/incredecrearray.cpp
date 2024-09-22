#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={541,56,85,25,1};
    int n=5;
    
    sort(arr.begin(),arr.begin()+n);
    
    int i=n/2;
    int j=n-1;
    while(i<j)
    {
        swap(arr[i++],arr[j--]);
    }
    for(auto it:arr)
    {
        cout<<it<<endl;
    }
}