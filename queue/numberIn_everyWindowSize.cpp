#include<iostream>
#include<queue>
using namespace std;

void displayQueue(queue<int> q){
    while(!q.empty()){
        cout << q.front() <<  " ";
        q.pop();
    }
    cout << endl;
}

/*
    void printNumberInEveryWindowSize(int arr[] , int n , int k){
        for(int i=0 ; i<=n-k ; i++){
            for(int j=i ; j<i+k ; j++){
                cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
*/

// approach 2 -
void printNumberInEveryWindowSize(int arr[] , int n , int k){
    queue<int> q;
    for(int i=0 ; i<k-1 ; i++){
        q.push(arr[i]);
    }

    for(int i=k-1 ; i<n ; i++){
        q.push(arr[i]);
        displayQueue(q);
        q.pop();
    }
}

int main(){
    int arr[] = {3,6,2,7,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin >> k;

    printNumberInEveryWindowSize(arr,n,k);
}