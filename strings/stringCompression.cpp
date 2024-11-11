#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "aaabbfcccc";
    int n = str.length();
    map<char,int> mp;

    for(int i=0 ; i<n ; i++){
        mp[str[i]]++;
    }

    for(auto it: mp){
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    for(auto it : mp){
        cout << it.first << it.second << " ";
    }
    cout << endl;

    for(int i=0 ; i<n ; i++){
        if(str[i] == str[i+1]) continue;
        cout << str[i] << mp[str[i]] << " ";
    }
    return 0;
}