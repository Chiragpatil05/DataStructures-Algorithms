#include<iostream>
using namespace std;


// method - 1
// int pow(int p , int q)
// {
//     // base case
//     if(q==0) return 1;

//     return p*pow(p,q-1);
// }

// int main(){
//     int p , q;
//     cout << "enter the value of p and q : " ;
//     cin >> p >> q;

//     cout << p << "^" << q <<" = " << pow(p,q) ;
//     return 0;
// }

// method-2
int pow(int p , int q)
{
    // base case
    if(q==0) return 1;
    
    //q is even
    if(q%2==0)
    {
        int result = pow(p,q/2);
        return result*result;
    }

    // q is odd
    else{
        int result = pow(p,(q-1)/2);
        return p*result*result;
    }
}

int main()
{
     int p , q;
    cout << "enter the value of p and q : " ;
    cin >> p >> q;

    cout << p << "^" << q <<" = " << pow(p,q) ;
    return 0;

}