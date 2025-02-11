/* Given a series of N daily price quotes for a stock, we need to calculate the span of the 
stocks's price for all N days. The span of the stack's price in one day is the maximum number 
of consecutive days (starting from that day and going backward)
for which the stock price was less than or equal to the price of that day.*/


#include <iostream>
#include <vector>
#include <stack>
#include<algorithm>
using namespace std;

vector<int> pge(vector<int> &arr)
{
    int n = arr.size();
    reverse(arr.begin(), arr.end()); 
    

    vector<int> output(n, -1);
    stack<int> st; // indexes;

    st.push(0); // initializing index in stack at 0 index;
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() and arr[i] > arr[st.top()])
        {

            output[st.top()] = n-i-1;
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

    reverse(output.begin(), output.end());
    reverse(arr.begin(), arr.end());


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

    vector<int> res = pge(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout <<( i-res[i]) << " ";
    }

    return 0;
}
