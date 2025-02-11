// Next Greater Element

#include <iostream>
using namespace std;

/*
its Time Complexity is : o(n2);
*/

void nge(int (&arr)[5])
{

    int len = sizeof(arr) / sizeof(arr[0]);

   

    for (int i = 0; i < len; i++)
    {

        for (int j = i + 1; j <= len; j++)
        {

            if (arr[j] > arr[i])
            {
                arr[i] = arr[j];
                break;
            }
            else
            {
                arr[i] = -1;
            }
        }
    }
}

int main()
{
    

        int arr[5];

    // int arr[]= {3, 4, 8, 4, 3};

    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        cout << "Enter the array element" << i << " : ";
        cin >> arr[i];
    }

    nge(arr);

    cout << "The NGE array is : ";

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
