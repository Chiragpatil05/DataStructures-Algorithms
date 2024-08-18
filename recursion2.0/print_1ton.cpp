#include<iostream>
using namespace std;

// we are using 2 arguments
void printTillN(int n , int start){
    if(start == n){
        cout << n << endl;
        return;
    }
    cout << start << endl;
    printTillN(n , start+1);
}

// using 1 arugument
void printTillN2(int n){
    if(n == 1){
        cout << 1 << endl;
        return;
    }
    printTillN2(n-1);
    cout << n << endl;
}

//  we are using 2 arguments
void printEven1toN(int n , int start){
    if(start == n){
        cout << n << endl;
        return;
    }
    cout << start << endl;
    printEven1toN(n , start+2);
}

void printEven1toN2(int n){
    if(n == 2){
        cout << 2 << endl;
        return;
    }
    printEven1toN2(n-2);
    cout << n << endl;
}

int main(){
    int n;
    cout << "enter the number : " ;
    cin >> n;

    // for(int i=1 ; i<=n ; i++){
    //     cout << i << endl;
    // }

    // int start = 1;
    // printTillN(n , start);
    // printTillN2(n);

    // -----------------
    // printing 1 to n even numbers only
    int start = 2;
    // printEven1toN(n , start);
    printEven1toN2(n);


    return 0;
}