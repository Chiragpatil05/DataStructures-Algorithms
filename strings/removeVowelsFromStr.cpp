#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "welcome to geeksforgeeks";
    int n = str.length();

    string ans;

    for(int i=0 ; i<n ; i++){
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
        str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            ans.push_back(str[i]);
        }
    }

    cout << ans;

    return 0;
}
