#include<iostream>
using namespace std;

int f(int i , int j , int m , int n)
{
    // base case
    if(i==m-1 and j==n-1) return 1;
    if(i>=m or j>=n) return 0;

    return f(i , j+1 , m , n) + f(i+1 , j , m , n);
}

int main()
{
    int m , n;
    cin >> m >> n;
   cout << "possible path : " <<  f(0 , 0 , m , n);

   return 0;
}