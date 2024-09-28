#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int n;
    int *arr;
    int tp;
public:
    Stack()
    {
        n=3;
        tp=-1;
        arr=new int[n];
    }
    void push(int x)
    {
        ++tp;
        arr[tp]=x;
    }
    int pop()
    {
        if(tp==-1)
        return -1;
        int x=arr[tp];
        tp--;
        return x;
    }
    int top()
    {
        return arr[tp];
    }
    int size()
    {
        return tp+1;
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.push(3);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.push(0);
    cout<<s.size()<<endl;
}