// --------------------- CHECK IF ARRAY IS SORTED OR NOT ------------------------------------
#include<iostream>
using namespace std;

int main(){
   // int arr[]= {-8,-2,0,1,15,62,98};
   int arr[]={2,0,-5,32,89,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    // maan lo array array sorted hai
    bool sort = true;
     for(int i=1 ; i<size ; i++)
     {
        if(arr[i] <= arr[i-1])
        {
            sort = false;
        }
     }

     if(sort)
     {
        cout << "array is sorted ";
     }
     else{
        cout << "array is not sorted ";
     }
    return 0;
}