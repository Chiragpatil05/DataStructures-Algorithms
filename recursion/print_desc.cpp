#include<iostream>
using namespace std;

void f(int n)
{
    //base case
    if(n<1) return;

    cout << n << " ";
    f(n-1);
}

int main()
{
    int n;
    cout << "enter the value of n = ";
    cin >> n;
    f(n);
    return 0;
}