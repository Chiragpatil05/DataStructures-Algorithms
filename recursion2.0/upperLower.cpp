#include<iostream>
using namespace std;

string to_upper(string &str , int n , int index){
    if(index == n) return str;
    str[index] = 'A' + str[index] - 'a';
    return to_upper(str , n ,  index + 1);
}

string to_lower(string &str , int n , int index){
    if(index == n) return str;
    str[index] = 'a' + str[index] - 'A';
    return to_lower(str , n , index + 1);
}

int main(){
    string str1;
    cout<< "enter the string in lowercase: ";
    cin >> str1;

    string str2;
    cout << "enter the string in uppercase: ";
    cin >> str2;

    int n = str1.length();
    int m = str2.length();
    int index1 = 0;
    int index2 = 0;


    string res1 = to_upper(str1 , n , index1);
    cout << "upper case string = " << res1 << endl;

    string res2 = to_lower(str2 , m , index2);
    cout << "lower case string = " << res2 << endl;
}