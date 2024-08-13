// --------------- majority element (moores's voting algorithm) ------------------------------------
#include <iostream>
using namespace std;

int majority(int arr[], int n)
{
    int element = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }
        if (element == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            count++;
        }
    }
    if (count >= n/2)
    {
        return element;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3 , 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "majority element is : " << majority(arr, size);
}