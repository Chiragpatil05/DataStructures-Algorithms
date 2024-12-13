#include<iostream>
using namespace std;

// function overloading
class A{
    public:
    // function differs in number of parameter
        void functionA(int a , int b){
            cout << "a+b = " << a+b << endl;
        }

        // @overloading
        void functionA(int a , int b , int c){
            cout << "a+b+c = " <<a+b+c << endl;
        }

    // function differs in type of parameter
        void functionB(int a){
            cout <<"integer = " << a <<  endl;
        }

        //@overloading
        void functionB(string a){
            cout << "name = " << a << endl;
        }
};

// operator overloading
class complex{
    private:
        int real;
        int img;
    public:
        complex(int real = 0, int img = 0){
            this->real = real;
            this->img = img;
        }

        complex operator + (complex &obj){
            complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        void show(){
            cout << real << "+" << img << "i" << endl;
        }
};

int main(){
    // A obj;
    // obj.functionA(2,5,6);
    // obj.functionB(18);
    // return 0; 

    complex c1(5,3);
    complex c2(3,2);
    complex c3 = c1+c2;
    c1.show();
    c2.show();
    c3.show();
}