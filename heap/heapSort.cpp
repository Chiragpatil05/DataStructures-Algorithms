#include<iostream>
using namespace std;

void heapify(int arr[] , int index , int n){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index] , arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapSort(int arr[] , int n){
    for(int i=n-1 ; i>=0 ; i--){
        swap(arr[i] , arr[0]);
        heapify(arr,0,i);
    }
}

void buildMaxHeap(int arr[] , int n){
    for(int i=(n-1)/2 ; i>=0 ; i--){
        heapify(arr,i,n);
    }
}

void print(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64,14,30,18,10,15,26,17,13,6,38,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    buildMaxHeap(arr,n);
    heapSort(arr,n);
    print(arr,n);
}