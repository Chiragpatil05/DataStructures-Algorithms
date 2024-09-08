/*
    we are given n and we have generate all 4 bit numbers
    If the n-bit number can start with either 0 or 1, So, the total number of n-bit numbers that can be generated is: 2^n
    If the n-bit number can only start with 1, then the first bit is fixed as 1, leaving the remaining In this case, the number of possible n-bit numbers would be: 2^(n-1)1
*/

#include<bits/stdc++.h>
using namespace std;

// it will generate all n bit number starting from 0 and 1
void generateNumbers(int n , string &temp , vector<string> &ans){
    if(temp.size() == n){
        ans.push_back(temp);
        return;
    }

    // add 1
    temp.push_back('1');
    generateNumbers(n , temp , ans);
    temp.pop_back();

    // add 0
    temp.push_back('0');
    generateNumbers(n , temp , ans);
    temp.pop_back();
}

void generateNumbers2(int n , string &temp , vector<string> &ans){
    if(temp.size() == n){
        ans.push_back(temp);
        return;
    }

    // staring mai sirf 1 aayega
    if(temp.empty()){
        temp.push_back('1');
        generateNumbers2(n , temp , ans);
        temp.pop_back();
    }

    // now we can add both 1 as well as 0
    else{
        // add 1
        temp.push_back('1');
        generateNumbers2(n , temp , ans);
        temp.pop_back();

        // add 0
        temp.push_back('0');
        generateNumbers2(n , temp , ans);
        temp.pop_back();
    }
}

int main(){
    int n;
    cout << "enter the value of n :" ;
    cin >> n;

    string temp;
    vector<string> ans;

    // generateNumbers(n , temp , ans);
    generateNumbers2(n , temp , ans);
    for(auto it: ans){
        cout << it << endl;
    }

    return 0;
}