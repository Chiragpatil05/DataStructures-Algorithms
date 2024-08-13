#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the number : " ;
    cin >> n;

    // method 1 : using __builtin_popcount(n) method which will count the number of 1 bit in binary representation of a number
    // int ans = __builtin_popcount(n);
    // cout << "number of 1 bit in the binary representation is = " << ans << endl;

    // method 2 :
    int oneBit = 0;
    while(n!=0){
        if(n&1){
            oneBit++;
        }
        n = n>>1;
    }
    cout << "number of 1 bit in the binary representation is = " << oneBit << endl;

    return 0;
}