// Given an array of length n and a target return a pair whose sum is equal to the
// target. If there is no pair present return -1;

// input : n = 7;
// Elements : [1, 2, 4, 5 , 11, 13, 10, 2]
// Target : 15

// output: [10, 5]

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Time complexity : o(n);


vector<int> targetsumpair(vector<int> &v, int target)
{

    unordered_map<int, int> m;
    vector<int> ans(2, -1);

    for (int i = 0; i < v.size(); i++)
    {
        if (m.find(target - v[i]) != m.end())
        {
            ans[0] = m[target - v[i]];
            ans[1] = i;
            return ans;
        }
        else
        {
            m[v[i]] = i;
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the no. of Element of Array ";
    int n;
    cin >> n;

    cout << "Enter the n number of element:";

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << "Enter the target sum : "<<endl;
    int target;
    cin >> target;

    vector<int> ans = targetsumpair(v, target);

    cout << ans[0] << "  " << ans[1] << endl;

    return 0;
}