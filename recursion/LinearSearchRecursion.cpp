#include<iostream>
using namespace std;

bool f(int *arr , int n , int i , int x)
{
    // base case
    if(i==n) return false;

    return (arr[i]==x) || f(arr,n,i+1,x);
}

int main()
{
    int arr[] = {4,12,54,13,3,8,6,1,-8,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 100;

    int result = f(arr,n,0,x);
    if(result) cout << "YES";
    else cout << "NO";
}