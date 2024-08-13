#include<iostream>
#include <math.h>

using namespace std;

int f(int *h, int n , int i)
{
    // base case
    if(i==n-1) return 0;
    if(i==n-2) f(h,n,i+1) + abs(h[i]-h[i+1]);

    return min((f(h,n,i+1) + abs(h[i]-h[i+1])) , (f(h,n,i+2) + abs(h[i]-h[i+2]))) ;

}

int main()
{
    // int n;
    // cout << "enter the no of stones / size : ";
    // cin >> n;

    // int arr[n];
    // cout << "enter the heights of stones : ";
    // for(int i=0 ; i<n ; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "minimum cost is : " << f(arr,n,0);
    // return 0;
    int h[]={10,30,40,20};
    int n=4;
    cout << f(h,n,0);
}