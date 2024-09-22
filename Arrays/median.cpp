#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array and elements of the array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    if(n%2==0)
    {
        cout<<"The median is "<<(arr[n/2]+arr[n/2 + 1])/2<<endl;
    }
    else
    cout<<"The median is "<<arr[n/2]<<endl;
}