#include<bits/stdc++.h>
using namespace std;

// function overriding
// virtual function

class base{
    public:
        void printSomething(){
            cout << "Namste from base class :-)" << endl;
        }

        // virtual function
        virtual void fun(){
            cout << "hahahahah" << endl;
        }
};

class derived : public base{
    public:
    // function overriding
        void printSomething(){
            cout << "kesa kya from derived class :-(" << endl;
        }
        
        void fun(){
            cout << "nhinhinhi" << endl;
        }
};

int main(){
    base obj_base;
    obj_base.printSomething();
    obj_base.fun();

    derived obj_derived;
    obj_derived.printSomething();
    obj_derived.fun();
    return 0;
}