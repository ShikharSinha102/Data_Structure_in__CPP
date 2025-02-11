#include <iostream>
#include <stack>
using namespace std;

void copytheStack(stack<int> &st, stack<int> &res)
{
    // make a temporary stack;

    stack<int> temp;

    while (not st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    while (not temp.empty())
    {
        res.push(temp.top());
        temp.pop();
    }
}

int main()
{

    stack<int> st;
    st.push(9);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    stack<int> res;

    copytheStack(st, res);

    while (not res.empty())
    {
        cout << res.top() << " ";
        res.pop();
    }
    return 0;
}
