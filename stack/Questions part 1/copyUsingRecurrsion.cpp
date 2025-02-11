#include <iostream>
#include <stack>
using namespace std;

void f(stack<int> &st, stack<int> &result)
{
    // base condition

    if (st.empty())
    {
        return;
    }
    int curr = st.top();
    st.pop();
    f(st, result);

    result.push(curr);
}

int main()
{

    stack<int> st;
    st.push(9);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    stack<int> result;

    f(st, result);

    while (not result.empty())
    {
        cout << result.top() << " ";
        result.pop();
    }
    return 0;
}