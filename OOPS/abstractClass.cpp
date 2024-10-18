#include<bits/stdc++.h>
using namespace std;

class shape{ // asbtract class
    virtual void draw() = 0; // pure virtual function
};

class circle : public shape{
    public:
        void draw(){
            cout << "drawing circle" << endl;
        }
};

int main(){
    circle c1;
    c1.draw();
    
    return 0;
}