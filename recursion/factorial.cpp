#include<iostream>
using namespace std;

int fact(int n)
{
    // base case
    if(n==1) return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout << "enter the number " ;
    cin >> n;
    cout << n <<"!" << "= " << fact(n) ;
    return 0;
}