#include<iostream>
using namespace std;

// diamond problem - ambiguity problem
/*class A{
    public:
        void show(){
            cout << "this is base class A" << endl;
        }
};

class B : public A {};

class C : public A {};

// if we override the function in class d , so ambiguity probem with not arise
class D : public B , public C {
    public:
        void show(){
            cout << "this is the derived class D"  << endl;
        }
};

int main(){
    D obj;
    obj.show();
}
*/



// solving diamond problem using scope resolution operator
/*class A{
    public:
        void show(){
            cout << "this is the base class A" << endl;
        }
};

class B : public A {
    public:
        void show(){
            cout << "this is the derived class B" << endl;
        }
};

class C : public A {
    public:
        void show(){
            cout << "this is the derived class C" << endl;
        }
};

class D : public B , public C{};

int main(){
    D obj;
    // if show function is not over ridden in B or C => this is the base class A
    // obj.B::show();
    // obj.C::show();

    // if we over ride the function in B , C , it will for particular class
    obj.B::show();
    obj.C::show();
}*/


// solving diamong problem using virtual keyword
class A{
    public:
        void show(){
            cout << "this is the base class A" << endl;
        }
};

class B : virtual public A{};

class C : virtual public A{};

class D : public B , public C{};

int main(){
    D obj;
    obj.show();
    return 0;
}

