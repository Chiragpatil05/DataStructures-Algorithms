#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex(){
            real = 0;
            img = 0;
        }

        Complex(int real , int img){
            this->real = real;
            this->img = img;
        }

        // overloading operator
        Complex operator + (Complex &obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }

        void print(){
            cout << real <<" + " << img << "i" << endl;
        }
};

int main(){
    Complex c1(5,3);
    c1.print();

    Complex c2(3,6);
    c2.print();

    Complex c3;
    c3 = c1+c2; // c1.add(c2)
    c3.print();


    return 0;
}