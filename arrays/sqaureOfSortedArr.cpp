#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;



int main(){
    vector<int> ans;

    int arr[]={-10,-3,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "array is : " ;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    int leftPtr = 0;
    int rightPtr = n-1;

    while(leftPtr <= rightPtr){
        if(abs(arr[leftPtr]) > abs(arr[rightPtr])){
            ans.push_back(arr[leftPtr]*arr[leftPtr]);
            leftPtr++;
        }
        else{
            ans.push_back(arr[rightPtr]*arr[rightPtr]);
            rightPtr--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<< "sorted sqaures array is :";
    for(int i=0 ; i<n ; i++){
        cout << ans[i] << " ";
    }
}