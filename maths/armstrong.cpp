#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
    int original = n;
    int sum = 0;

    while(n > 0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n /10;
    }

    if(sum == original) return true;
    else return false;
}

int main(){
    int n;
    cout << "enter the number : ";
    cin >> n;

    bool result = checkArmstrong(n);
    if(result) cout << n << " is a armstong number" << endl;
    else cout << "it is not armstrong number" << endl;

    return 0;
}

