#include<bits/stdc++.h>
using namespace std;

// approach 1 
void findSubsetSum(int arr[] , int n , int index , int sum , vector<int> &ansSum){
    if(index == n){
        ansSum.push_back(sum);
        return;
    }

    // exclude
    findSubsetSum(arr , n , index + 1 , sum , ansSum);

    // include
    findSubsetSum(arr , n , index + 1 , sum + arr[index] , ansSum);
}


// approach 2
bool helper(int arr[] , int n , int index , int target){
    if(target == 0) return true;
    if(target < 0 || index == n) return false;

    return helper(arr , n , index + 1 , target) || helper(arr , n , index + 1 , target - arr[index]);
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
    int sum = 0;
    vector<int> ansSum;

    // findSubsetSum(arr , n , index , sum , ansSum);
    //     bool ans = false;
    // for(int i=0 ; i<ansSum.size() ; i++){
    //     if(ansSum[i] == target){
    //         ans = true;
    //     }
    // }
    // if(ans) cout << "yes" << endl;
    // else cout << "no" << endl;

    int result = helper(arr , n , index , target);
    if(result) cout << "yes" << endl;
    else cout << "no" << endl;


    return 0;
}