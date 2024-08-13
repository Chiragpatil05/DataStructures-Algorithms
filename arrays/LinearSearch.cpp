// --------------------------------------------- LINEAR SEARCH -------------------------------------------
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            return i;
        }

    }
    return -1;
}

int main()
{
    int arr[] = {-5, -3, 0, 3, 5, 12, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "enter the value to be found for : ";
    cin >> target;

    int ans = LinearSearch(arr, size, target);
    cout << ans;
}