#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6};


    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> ans;

    cout << "arr1 = ";
    for(int i=0 ; i<size1 ; i++){
        cout << arr1[i] << " ";
    }cout << endl;

    cout << "arr2 = ";
    for(int i=0 ; i<size2 ; i++){
        cout << arr2[i] << " ";
    }cout << endl;

    int i=0 ; // for arr1
    int j=0 ; // for arr2
    int k=0 ; // for ans(merged array)

    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            k++;
        }
        else{
            ans.push_back(arr2[j]);
            j++;
            k++;
        }
    }

    // bache hue arr1 ke elements daalne ke liye
    while(i<size1){
        ans.push_back(arr1[i]);
        i++;
        k++;
    }

    // bache hue arr2 ke elements daalne ke liye
    while(j<size2){
        ans.push_back(arr2[j]);
        j++;
        k++;
    }
    
    cout << " merged sorted array = ";
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }cout << endl;
}