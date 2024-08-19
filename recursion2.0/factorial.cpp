#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1 || n == 0) return 1;
    return n * factorial(n-1);
}

int main(){
    int n;
    cout << "enter number : ";
    cin >> n;

    if(n < 0){
        cout << "Factorial is not possible" << endl;
    }

    /* 
        int factorial = 1;
        for(int i=1 ; i<= n ; i++){
            factorial = factorial * i;
        }
        cout << n << "!" << " = " << factorial << endl;
    */

    int ans = factorial(n);
    cout << n << "!" << " = " << ans << endl;

    
}