#include <iostream>
#include <stack>
using namespace std;

void popAtindex(stack<int> &st, int indx )
{

    if(st.empty()){
        cout<<"underflow";
        return;
    }

    stack<int> temp;
    int i = 0;
    int st_size = st.size();
    int r = st_size-indx-1;

    while (i < r  )
    {
        temp.push(st.top());
        st.pop();
        i++;
    }
    st.pop();

    while (not temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

void insertAtIndex(stack<int> &st, int indx, int value)
{

    if ((indx + 1) > st.size())
    {

        cout << "index is greater than size of the stack";
        return;
    }

    stack<int> temp;
    int i = 0;
    int st_size = st.size();

    if ((indx + 1) > st_size)
    {

        cout << "index is greater than size of the stack";
        return;
    }

    while (i < (st_size - indx))
    {
        temp.push(st.top());
        st.pop();
        i++;
    }

    st.push(value);

    while (not temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}

int main()
{

    stack<int> st;
    int index = 3;

    st.push(9);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(50);

    insertAtIndex(st, 0, 45);
   
    popAtindex(st, 2);


    while (not st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}