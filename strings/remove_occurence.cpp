#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "string is = " << s << endl;

    string result ="";
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] != 'a')
        {
            result = result + s[i];
        }
    }

    cout << "new string is = " << result ;
    return 0;
}