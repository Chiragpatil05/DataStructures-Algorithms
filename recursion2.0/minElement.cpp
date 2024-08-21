#include<iostream>
using namespace std;

// way 1
int findMinElement(int arr[] , int n , int index , int mini){
    if(index == n) return mini;
    if(arr[index] < mini) mini = arr[index];
    findMinElement(arr , n , index+1 , mini);
}

// way 2
int findMinElement2(int arr[] , int n , int index){
    if(index == n) return arr[index];
    return min(arr[index] , findMinElement2(arr , n , index+1));
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

    int index = 0;
    int mini = arr[0];
    // int minElement = findMinElement(arr , n , index , mini);
    int minElement = findMinElement2(arr , n , index);
    cout << "minimum element in array = " << minElement << endl;

    return 0;
}