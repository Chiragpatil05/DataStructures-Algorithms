#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // 10               20          30      40
    // 10 20            20 30       30 40 
    // 10 20 30         20 30 40 
    // 10 20 30 40
    for(int start = 0 ; start < n ; start++){
        for(int end = start ; end < n ; end++){
            for(int i=start ; i<=end ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}