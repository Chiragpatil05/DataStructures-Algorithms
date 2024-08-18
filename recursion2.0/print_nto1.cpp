#include <iostream>
using namespace std;

// print n to 1 using recursion
void print(int n){
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    print(n-1);
}

// print only even or only odd number from n to 1
void printEvenOdd(int n){
    if(n == 2){
        cout << 2 << endl;
        return;
    }
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    printEvenOdd (n-2);
}

int main(){
    int n;
    cout << "enter the number : " ;
    cin >> n;

    // for(int i=n ; i>0 ; i--){
    //     cout << i << endl;
    // }

    // print(n);

    printEvenOdd(n);

    return 0;
}