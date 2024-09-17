#include<bits/stdc++.h>
using namespace std;

int main(){
    // string str = "Hey i am chirag";
    // cout << str;

    string str;
    cout << "enter the input string : " ;
    getline(cin , str);
    cout << "string = " << str << endl;

    /*
        way 1 - stringstream
        string word;
        stringstream ss(str);
        while(ss >> word) cout << word << endl;
    */

    /* way2
        str.push_back(' ');
        vector<string> words;
        string temp = "";
        for(int i=0 ; i<=str.length() ; i++){
            temp = temp + str[i];
            if(str[i] == ' '){
                words.push_back(temp);
                temp.clear();
            }
        }

        for(int i=0 ; i<words.size() ; i++){
            cout << words[i] << endl;
        }
    */


}