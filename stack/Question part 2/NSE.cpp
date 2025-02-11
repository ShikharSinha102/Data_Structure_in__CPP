// Next Smaller Element: 

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nge(vector<int> &arr)
{
    int n = arr.size();
    vector<int> output(n, -1);
    stack<int> st; // indexes;

    st.push(0); // initializing index in stack at 0 index;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] < arr[st.top()])
        {

            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while (not st.empty())
    {
        // not mandatory
        output[st.top()] = -1;
        st.pop();
    }
    return output;
}

int main()
{

    int n;
    cout << "size of vector array ";
    cin >> n;

    vector<int> v;
    while (n--)
    {
        int x;

        
        cin >> x;
        v.push_back(x);
    }

    vector<int> res = nge(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}