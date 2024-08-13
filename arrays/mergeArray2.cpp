#include<iostream>
using namespace std;

int main(){
    // we have to merge arr1 and arr2 by making changes in arr1
    int arr1[] = {1,2,3,0,0,0};
    int arr2[] = {2,5,6};


    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    int m = 0;

    for(int i=0 ; i<size1 ; i++){
        if(arr1[i]>0){
            m++;
        }
    }

    cout << "arr1 = ";
    for(int i=0 ; i<m ; i++){
        cout << arr1[i] << " ";
    }cout << endl;

    cout << "arr2 = ";
    for(int i=0 ; i<n ; i++){
        cout << arr2[i] << " ";
    }cout << endl;


    int i = m-1;
    int j = n-1;
    int k = size1-1;

    while (i>=0 && j>=0)
    {
        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i];
            k--;
            i--;
        }    
        else{
            arr1[k]= arr2[j];
            k--;
            j--;
        }
    }

    while(i>=0){
        arr1[k--] = arr1[i--];
    }

    while(j>=0){
        arr1[k--] = arr2[j--];
    }

    cout << " merged array = ";
    for(int i=0 ; i<size1 ; i++){
        cout << arr1[i] << " ";
    }
    
}