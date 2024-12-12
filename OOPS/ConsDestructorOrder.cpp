#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
class test{
public:
    test(){
        cnt++;
        cout << "no of object created = " << cnt << endl;
    }

    ~test(){
        cout << "no of objects destroyed = " << cnt << endl;
        cnt--;
    }
};

int main(){
    test t1,t2,t3;
    return 0;
}