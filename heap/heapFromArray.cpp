#include<iostream>
using namespace std;

void heapify(int arr[] , int index , int size){
    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left < size && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < size && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index] ,arr[largest]);
        heapify(arr,largest,size);
    }
}

void buildHeap(int arr[] , int size){
    for(int i = (size-1)/2 ; i>=0 ; i--){
        heapify(arr,i,size);
    }
}

void print(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[] = {14,15,12,22,17,20,18,24,23,30,19};
    int size = sizeof(arr)/sizeof(arr[0]);

    buildHeap(arr,size);
    print(arr,size);
}