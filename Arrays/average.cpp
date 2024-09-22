#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>arr;
    cout<<"Enter n and elements of array"<<endl;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        sum+=ele;
        arr.push_back(ele);
    }
    cout<<"The average is "<<sum/n<<endl;
}