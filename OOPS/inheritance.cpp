#include<iostream>
using namespace std;

// single inhertitance (A -> B)
class A{
    public:
    A(){
        cout << "constructor of parent / base class A" << endl;
    }

    ~A(){
        cout << "destructor of parent / base class A" << endl;
    }
};

class B : private A{
    public:
    B(){
        cout << "constructor of child / derived class B" << endl;
    }

    ~B(){
        cout << "destructor of child / derived class B" << endl;
    }
};


// multilevel inheritance (A -> B , B-> C)
class first{
    public:
        void func1(){
            cout << "this is the base or parent class" << endl;
        }
};

class second : public first{
    public:
        void func2(){
            cout << "this is the 1st derived class" << endl;
        }
};

class third : public second{};


// multiple inheritance (A-> C , B->C => A,B=>C)
class test1{
    public:
        void printTest1(){
            cout << "this is the first test base class" << endl;
        }
};

class test2{
    public:
        void printTest2(){
            cout << "this is the second test base class" << endl;
        }
};

class test3 : public test1 , public test2{};

int main(){
    // single inheritance 
    // A obj1;
    // B obj2;

    // multilevel inheritance
    // third obj3;
    // obj3.func2();
    // obj3.func1();

    // multiple inheritance
    test3 obj;
    obj.printTest1();
    obj.printTest2();
}