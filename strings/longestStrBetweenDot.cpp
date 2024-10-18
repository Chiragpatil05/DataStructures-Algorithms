#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "ab.cdda.asdas.sdfsdea";
    int n = str.length();
    str[n] = '.';
    for(int i=0 ; i<=n ; i++) cout << str[i] << " ";
    cout << endl;
    
    int maxString = INT_MIN;
    int count = 0;
    
    for(int i=0 ; i<=n ; i++){
        if(str[i] != '.') count++;
        else if(str[i] == '.'){
            maxString = max(maxString , count);
            count = 0;
        }
    }
    
    cout << maxString << endl;
}
