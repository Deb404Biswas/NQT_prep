#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter a postfix expression" << endl;
    cin >> s;
    stack<string> st;  // Change the stack to store strings
    int i = 0;

    while (i < s.length())
    {
        // If operand, push to stack
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            st.push(string(1, s[i]));  // Push as string
        }
        // If operator
        else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-' || s[i] == '^')
        {
            // Pop the top two operands
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();

            // Form the string "(t2 operator t1)"
            string cons = "(" + t2 + s[i] + t1 + ")";
            st.push(cons);  // Push the result back onto the stack
        }
        i++;
    }

    // The final result (infix expression) is on the top of the stack
    cout << "Infix expression: " << st.top() << endl;

    return 0;
}
