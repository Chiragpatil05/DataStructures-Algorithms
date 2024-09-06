#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n , int source , int helper , int destination){
    if(n == 1){
        cout << "move disk " << n << " from rod " << source << " to rod " << destination << endl;
        return;
    }

    // move n-1 disk from source to destination
    towerOfHanoi(n-1 , source , destination , helper);
    cout << "move disk " << n << " from rod " << source << " to rod " << destination << endl;

    // move  n-1 rods from helper to destination
    towerOfHanoi(n-1 , helper , source , destination);
}

int main(){
    int n; // n is the number of disk
    cout << "enter the number of disk : " ;
    cin >> n;

    // there are 3 rods : source , helper , destination
    int source = 1;
    int helper = 2;
    int destination = 3;

    cout << "total number of steps to move disk from source to destination = " << pow(2 , n) - 1;
    cout << endl;

    towerOfHanoi(n , source , helper , destination);

    return 0;
}