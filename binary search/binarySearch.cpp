#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int key){
    int start = 0;
    int end = n-1;


    while(start <= end){
        int mid = start + (end - start)/2 ;

        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid+1;
        else end = mid-1;
    }

    return -1;
}

int main(){

    int arr[1000];

    int n;
    cout << "enter size of array : ";
    cin >> n;
    cout << endl;

    cout << "enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }cout<< endl;

    cout << " array = ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }cout << endl;

    int key;
    cout << "enter the element to search : ";
    cin >> key;

    cout << "element found at index " << binarySearch(arr,n,key) << endl;

    return 0;

}