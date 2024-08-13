#include<iostream>
#include<vector>
using namespace std;

int main(){
    // both arr1 and arr2 are sorted arrays
    int arr1[]={1,2};
    int arr2[]={2,2,3,3};
    int sizeArr1 = sizeof(arr1)/sizeof(arr1[0]);
    int sizeArr2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << "arr1 = ";
    for(int i=0 ; i<sizeArr1 ; i++){
        cout << arr1[i] << " ";
    }cout<< endl;

    cout << "arr2 = ";
    for(int i=0 ; i<sizeArr2 ; i++){
        cout << arr2[i] << " ";
    }cout << endl;

    vector<int> ans;
    
    int i=0; // for arr1
    int j=0; // for arr2

    while(i<sizeArr1 && j<sizeArr2){
        // common element hai
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }


    cout << "intersected array is = ";
    if(ans.size()>0){
        for(int i=0 ; i<ans.size() ; i++){
             cout << ans[i] << " ";
    }
    }
    else{
        cout << "null";
    }
    
}