// --------------------------------------- MAXIMUM AND MINIMUM ELEMENT IN ARRAY ---------------------------------
#include<iostream>
using namespace std;

int main(){
    int arr[]={-5,-3,0,3,5,12,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int maxi = arr[0];
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "maximum value is : " << maxi << endl;

    int mini = arr[0];
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    cout << "minimum value is : " << mini << endl;

    return 0;
}