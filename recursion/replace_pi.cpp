#include<iostream>
using namespace std;

void f(string str)
{
    //base case
    if(str.length()==0) return;
    
    if(str[0]=='p' and str[1]=='i') 
    {
        cout << "3.14";
        f(str.substr(2));
    }

    else{
        cout << str[0];
        f(str.substr(1));
    }
}

int main()
{
    string str;
    cin >> str;

    f(str);

}