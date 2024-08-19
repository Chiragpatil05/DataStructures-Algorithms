#include<iostream>
using namespace std;

int pow(int n){
    if(n == 1) return 2;
    return 2 * pow(n-1);
}

int main(){
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    if(n == 0){
        cout << "2^0 = 1" << endl;
    }

    /*
        int ans = 1;
        for(int i=1 ; i<=n ; i++){
            ans = ans * 2;
        }
        cout << ans;
    */

    int ans = pow(n);
    cout << "2^" << n << " = " << ans;

    return 0;
}