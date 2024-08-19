#include<iostream>
using namespace std;

int sum(int n){
    if(n == 1) return 1;
    return n + sum(n-1);
}

int main(){
    int n;
    cout << "enter the number : " ;
    cin >> n;

    /*
        int sum = 0;
        for(int i=1 ; i<=n ; i++){
            sum = sum + i;
        }
        cout << " sum upto " << n << " = " << sum;
    */

    int ans = sum(n);
    cout << " sum upto " << n << " = " << ans; 

    return 0;
}