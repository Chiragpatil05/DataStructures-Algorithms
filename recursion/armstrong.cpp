#include<iostream>
using namespace std;

int pow(int p , int q)
{
    if(q==0) return 1;

    return p*pow(p,q-1);
}


int f(int n ,int d)
{
    // BASE CASE
    if(n==0) return 0;

    return pow(n%10,d) + f(n/10,d);
}

int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;

    int no_of_digit = 0;
    int temp = n;

    while(temp>0)
    {
        temp = temp/10;
        no_of_digit++;
    }

    int result = f(n,no_of_digit);

    if(result==n) cout << "YES";
    else cout << "NO" ;

}