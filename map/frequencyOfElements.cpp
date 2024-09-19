#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cout << "enter size of array = ";
    cin >> n;

    int arr[n];

    cout << "enter elements of array : " ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    map<int,int> mp;

    // store frequecncy of each element in map
    for(int i=0 ; i<n ; i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;


}