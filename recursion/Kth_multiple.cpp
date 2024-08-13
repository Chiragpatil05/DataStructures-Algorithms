#include<iostream>
using namespace std;

void f(int num , int k)
{
    // base case 
    if(k==0) return;
    f(num,k-1);
    cout << num*k << " ";
}

int main()
{
    int num , k;
    cout << "enter the value of num & k = " ;
    cin >> num >> k;
    cout << k <<" multiple of " << num << " = " ;
    f(num,k);
    return 0;
}