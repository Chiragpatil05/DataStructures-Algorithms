#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int x;
        int y;
        int z;
    
    A(){
        x = 0;
        y = 0;
    }

    A(int z) : A() {
        this-> z = z;
    }

    void print(){
        cout << this->x << " " << this->y << " " << this->z  << endl;
    }
};

int main(){
    A obj1(5);
    obj1.print();
}