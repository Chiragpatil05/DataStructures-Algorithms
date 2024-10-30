#include<bits/stdc++.h>
using namespace std;

int main(){
    int intNumber;
    cout << "enter the number : ";
    cin >> intNumber;

    string strNumber = to_string(intNumber);
    int n = strNumber.length();

    // cout << strNumber;

    vector<string> words = {
        "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine"
    };

    string ans;

    for(int i=0 ; i<n ; i++){
        char ch = strNumber[i];
        int index = ch - '0';
        ans += " " + words[index];
    }

    cout << ans.substr(1) << endl;

    return 0;
}