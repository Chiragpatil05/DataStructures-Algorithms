#include<iostream>
using namespace std;

int fib(int n)
{
    // base case
    if(n==0 || n==1) return n;

    return fib(n-1)+fib(n-2);
}

int main()
{ 
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << n << "th fibonacci number = " << fib(n) ;
    
    return 0;
}