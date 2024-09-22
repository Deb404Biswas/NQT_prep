#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size and elements of the array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)// 1 2 1 2 2 3 3
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    int i=0,j=1;
    while(j<n)
    {
        if(arr[i]==arr[j])
        {
            j++;
        }
        else
        {
            swap(arr[i+1],arr[j]);
            i++;
            j++;
        }
    }
    cout<<"The array after removing the duplicate"<<endl;
    for(int k=0;k<=i;k++)
    cout<<arr[k]<<" ";
    cout<<endl;
}