#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int pre=1,suf=1,maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        pre*=arr[i];
        suf*=arr[n-1-i];
        if(pre==0)
        pre=1;
        if(suf==0)
        suf=1;
        maxi=max(maxi,max(pre,suf));
    }
    cout<<"The maximum subarray product is "<<maxi<<endl;
}