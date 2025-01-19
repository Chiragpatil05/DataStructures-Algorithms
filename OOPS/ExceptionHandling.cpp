#include<bits/stdc++.h>
using namespace std;

void divideNumber(int numerator , int denominator){
    if(denominator == 0){
        throw runtime_error("cannot divided by zero");
    }
    else cout << "ans = " << numerator/denominator << endl;
}

int main(){
    int numerator , denominator;

    try{
        cout << "enter numerator = ";
        cin >> numerator;

        cout << "enter denominator = ";
        cin >> denominator;

        divideNumber(numerator , denominator);
    }
    catch(const runtime_error &e){
        cout << "runtime error " << e.what() << endl;
    }
    catch(...){
        cout << "an unknown error is occured" << endl;
    }
}