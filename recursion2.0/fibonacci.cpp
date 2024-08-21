#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int n;
    cout << "which number of fibonacci series you want = ";
    cin >> n;

    /*
        int firstNum = 0;
        int secondNum = 1;
        cout << firstNum << " " << secondNum << " ";

        for(int i=2 ; i<n ; i++){
            int nextNum = firstNum + secondNum;
            cout << nextNum << " ";
            firstNum = secondNum;
            secondNum = nextNum;
        }
    */

    // printing nth fibonacci number
    int ans = fibonacci(n);
    cout << n << "th number of series is = " << ans <<  endl;

    return 0;
}