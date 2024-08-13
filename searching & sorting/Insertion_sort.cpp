#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array : " ;
    cin >> n;

    int arr[n] ;

    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Unsorted array is : " ;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=1 ; i<n ; i++)
    {
        int temp = arr[i];
        int j = i-1 ;
        
        while(j>=0 && temp<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }

    cout << "Sorted array is :  " ;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    } 

    return 0;
}