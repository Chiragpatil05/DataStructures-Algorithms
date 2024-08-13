// ------------------------------- SORT 0,1,2 ----------------------------------
#include<iostream>
using namespace std;

int main()
{
    cout << "enter the size of the array : ";
    int n;
    cin >> n;
    cout << endl;
    
    int arr[n];
    
    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    
    cout << "arrayy is : ";
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int zero=0;
    int one=0;
    int two=0;
    
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else if(arr[i]==1)
        {
            one++;
        }
        else{
            two++;
        }
    }
    
    for(int i=0 ; i<zero ; i++)
    {
        arr[i]=0;
    }
    
    for(int i = zero ; i<zero+one ; i++)
    {
        arr[i]=1;
    }
    
    for(int i=zero+one ; i<zero+one+two ; i++)
    {
        arr[i]=2;
    }
    
    cout << "sorted colors : ";
    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
    
}