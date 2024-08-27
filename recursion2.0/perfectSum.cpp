// find subsets or subsequnce having sum equal to target
#include<bits/stdc++.h>
using namespace std;

void subsetSum(int arr[] , int n , int index , int sum , int &ans , int target){
    if(index == n){
        if(sum == target) ans++;
        return;
    }

    // exclude
    subsetSum(arr , n , index + 1 , sum , ans , target);

    // include
    subsetSum(arr , n , index + 1 , sum + arr[index] , ans , target);
}

int subsetSum2(int arr[] , int n , int index , int target){
    if(index == n){
        if(target == 0) return 1;
        else return 0;
    }
    return subsetSum2(arr , n , index + 1 , target) + subsetSum2(arr , n , index + 1 , target - arr[index]);
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

    // int index = 0;
    // int sum = 0;
    // int ans = 0;
    // method 1 : 
    // subsetSum(arr , n , index , sum , ans , target);
    // cout << ans <<  endl;

    // method 2 : 
    int index = 0;
    int result = subsetSum2(arr , n , index ,target);
    cout << result << endl;

}