#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    vector<int>temp;
    for(auto it:arr)
    temp.push_back(it);
    map<int,int>mp;
    sort(temp.begin(),temp.begin()+n);
    cout<<"Sorted array is as follws:"<<endl;
    for(auto it:temp)
    cout<<it<<" "<<endl;
    int c=1;
    for(int i=0;i<n;i++)
    {
        mp[temp[i]]=c;
        c++;
    }
    cout<<"The array elements with rank is as follows:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"---->"<<mp[arr[i]]<<endl;
    }
    cout<<endl;
}