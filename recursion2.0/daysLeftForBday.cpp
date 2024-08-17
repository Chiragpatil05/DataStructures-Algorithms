#include<iostream>
using namespace std;

void fun(int n){
    // base case
    if(n == 0){
        cout << "Happy birthday" << endl;
        return;
    }
    cout << n << " days left for birthday" << endl;
    fun(n-1);
}

int main(){
    /* ----- iterative approach -------------
        int n = 11;
        for(int i=n ; i>0 ; i--){
            cout << i << " days left for birthday" << endl;
        }
        cout << "Happy birthday" << endl;
    */


    int n;
    cout << "enter days : " ;
    cin >> n;

    fun(n);
    return 0;
}