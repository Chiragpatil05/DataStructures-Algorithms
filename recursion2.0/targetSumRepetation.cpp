#include<bits/stdc++.h>
using namespace std;

int subsetSum(int arr[] , int n , int index , int target){
    if(target == 0) return 1;
    if(target < 0 || index == n) return 0;
    return subsetSum(arr , n , index+1 , target) + subsetSum(arr , n , index , target - arr[index]);
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

    int target;
    cout << "enter the target : ";
    cin >> target;

    int index = 0;
    int result = subsetSum(arr , n , index , target);
    cout << result << endl;
}