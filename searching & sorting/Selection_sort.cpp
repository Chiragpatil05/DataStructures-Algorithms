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
    
    for(int i=0 ; i<n ; i++)
    {
        int min = i;

        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            // swap(arr[i] , arr[min]);
            int temp = arr[i] ;
            arr[i] = arr[min] ;
            arr[min] = temp ;
        }
    }

    cout << "sorted array is .. " ;
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] <<  " ";
    }

    return 0;

}