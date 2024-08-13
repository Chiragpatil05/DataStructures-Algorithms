// --------------------PRINT ALL THE SUBARRAYS-------------------------- 
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "array is : ";
    for(int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "subarrays are : " << endl;
    for(int start=0 ; start < size ; start++)
    {
        for(int end=start ; end < size ; end++)
        {
            for(int i=start ; i<=end ; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}