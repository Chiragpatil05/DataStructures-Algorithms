#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array : " ;
    cin >> n;

    int arr[n];

    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Unsorted array is .." ;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=0 ; i<n-1 ; i++)
    {
        bool flag = 0;
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp; 
               flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    cout << "sorted array is .. " ;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] <<  " ";
    }

    return 0;
}