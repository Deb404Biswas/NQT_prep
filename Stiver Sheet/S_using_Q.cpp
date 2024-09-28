#include<bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int>q;
    public:
    void Push(int x)
    {
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int x=q.front();
        q.pop();
        return x;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
};

int main()
{
    Stack s;
    s.Push(3);
    s.Push(2);
    s.Push(4);
    s.Push(1);
    cout << "Top of the stack: " << s.Top() << endl;
    cout << "Size of the stack before removing element: " << s.Size() << endl;
    cout << "The deleted element is: " << s.Pop() << endl;
    cout << "Top of the stack after removing element: " << s.Top() << endl;
    cout << "Size of the stack after removing element: " << s.Size();
}