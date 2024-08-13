#include<iostream>
using namespace std;

int gcd(int a ,int b)
{
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int a , b;
    cout << "enter the value of a & b = ";
    cin >> a >> b;
    cout << "gcd of " << a << " & " << b << " is " << gcd(a,b);
    return 0;
}