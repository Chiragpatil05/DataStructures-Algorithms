#include<iostream>
using namespace std;

int sqaureSum(int n){
    if(n == 1) return 1;
    return n*n + sqaureSum(n-1);
}

int main(){
    int n;
    cout << "enter the value of n = " ;
    cin >> n;

    if(n <= 0){
        cout << "answer is not possible" << endl;
    }

    /*
        int ans = 0;
        for(int i=1 ; i<=n ; i++){
            ans = ans + i*i;
        }
        cout << "sum of sqaures of number upto " << n << " = " << ans << endl;
    */

    int ans = sqaureSum(n);
    cout << "sum of sqaures of number upto " << n << " = " << ans << endl;

    return 0;
}