#include<iostream>
using namespace std;

// -------------------- SUM OF ELEMENTS IN ARRAY ------------------------
int main(){
    int arr[]={-5,-3,0,3,5,12,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for(int i=0 ; i<size ; i++)
    {
       sum = sum + arr[i];
    }
    cout << "sum of elements : " << sum << endl;
    return 0;
}