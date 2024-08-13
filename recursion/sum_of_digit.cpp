#include<iostream>
using namespace std;

int f(int n)
{
    //base case
    if(n>=0 && n<=9) return n;

    return f(n/10) + (n%10) ;

}

int main()
{
    int n;
    cout << "enter the digit : ";
    cin >> n;
    cout << "sum of digits of " << n << " = " << f(n) ;

    return 0;
}