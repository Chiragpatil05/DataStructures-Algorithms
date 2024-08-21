#include <iostream>
using namespace std;

// way 1
int findSum(int arr[] , int n , int index , int sum){
    if(index == n) return sum;
    sum = sum + arr[index];
    findSum(arr , n , index+1 , sum);
}

// way 2
int findSum2(int arr[] , int n , int index){
    if(index == n) return 0;
    return arr[index] + findSum2(arr , n , index+1);
}

// way 3 
int findSum3(int arr[] , int n , int lastIndex){
    if(lastIndex == 0) return 0;
    return arr[lastIndex] + findSum3(arr , n , lastIndex-1);
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
    
    int sum = 0;
    int index = 0;
    int lastIndex = n-1;
    // cout << findSum(arr , n , index , sum);
    // cout << findSum2(arr , n , index);
    cout << findSum3(arr , n , lastIndex);


    return 0;
}