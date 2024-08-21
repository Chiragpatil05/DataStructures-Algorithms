#include<iostream>
using namespace std;

void printArray(int arr[] , int n , int index){
    if(index == n) return;
    cout << arr[index] << " ";
    printArray(arr , n , index+1);
}

void printArrayReverse(int arr[] , int n , int index){
    if(index == n) return;
    printArrayReverse(arr , n , index+1);
    cout << arr[index] << " ";
}

void printArrayReverse2(int arr[] , int n , int lastIndex){
    if(lastIndex == -1) return;
    cout << arr[lastIndex] << " ";
    printArrayReverse2(arr , n , lastIndex-1);
}



int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    /* 
        cout << "array is = " ;
        for(int i=0 ; i<n ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    */

    int index = 0;
    printArray(arr , n , index);
    cout << endl;

    // printArrayReverse(arr , n , index);
    // cout << endl;

    int lastIndex = n-1;
    printArrayReverse2(arr , n , lastIndex);

    return 0;
}