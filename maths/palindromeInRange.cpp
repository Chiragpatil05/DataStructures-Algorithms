#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n){
    int original = n;
    int reverse = 0;

    while(n > 0){
        int ld = n % 10;
        reverse = reverse * 10 + ld;
        n = n / 10;
    }

    if(reverse == original) return true;
    else return false;
}

int main(){
    int a;
    cout << "enter the range first number : ";
    cin >> a;

    if(a < 10) cout << "Number is less than 10";

    int b;
    cout << "enter the range second number : ";
    cin >> b;

    if(b < 10) cout << "Number is less than 10";

    for(int i=a ; i<=b ; i++){
        if(checkPalindrome(i)){
            cout << i << endl;
        }
    }

    return 0;


}