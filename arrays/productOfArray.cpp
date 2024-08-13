#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[3];
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[3];
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int product[3];

    cout << "enter array 1 elements : " ;
    for(int i=0 ; i<n1 ; i++){
        cin >> arr1[i];
    } 

    cout << "enter array 2 elements : ";
    for(int i=0 ; i<n2 ; i++){
        cin >> arr2[i];
    }

    for(int i=0 ; i<10 ; i++){
        product[i] = arr1[i] * arr2[i];
        cout << product[i] << " ";
    }cout << endl;

}