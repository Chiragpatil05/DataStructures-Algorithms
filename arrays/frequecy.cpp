#include<bits/stdc++.h>
#include<map>
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,2,3,3,5,5,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "array is : " << endl;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }cout << endl;

    map<int,int> mp;

    // map ke andar sab elements ki frequecy store karana hai
    for(int i=0 ; i<n ; i++){
        mp[arr[i]]++;
    }

    // accessing map
    cout << "element " <<  " " << "frequency" << endl;
    for(auto i : mp){
        cout << i.first << " " << i.second << endl;
    }


}

