#include<iostream>
using namespace std;

void print(int *arr , int idx , int n)
{
    // base case
    if(idx==n) return;

    cout << arr[idx] << " ";
    print(arr,idx+1,n);
}

int main(){
    int n = 6;
    int arr[]={0,-8,10,50,120,5};
    print(arr,0,n);
    
    return 0;
}