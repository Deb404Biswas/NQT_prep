#include<bits/stdc++.h>
using namespace std;

class Stack
{
    public:
    int min=INT_MAX;
    stack<int>st;
    void Push(int x)
    {
        if(st.empty())
        {
            min=x;
            st.push(x);
        }
        else if(x<min)
        {
            int nval=2*st.top()-min;
            st.push(nval);
            min=x;
        }
        else if(x>min)
        st.push(x);
    }
    int Pop()
    {
        if(st.empty())
        return -1;
        int x=st.top();
        if(st.top()>min)
        st.pop();
        else
        {
            min=2*st.top() - min;
            st.pop();
        }
        return x;
    }
    int getMin()
    {
        return min;
    }
};

int main()
{
    Stack st;
    st.Push(10);
    st.Push(12);
    st.Push(3);
    cout<<"The minimum in stack is"<<st.getMin()<<endl;
    st.Pop();
    cout<<"The minimum in stack is"<<st.getMin()<<endl;
}