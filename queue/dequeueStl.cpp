#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(12);
    dq.push_front(76);
    dq.push_front(58);
    dq.push_back(5); 
    dq.push_back(101);

    dq.pop_front();
    dq.pop_back();

    cout << "front = " << dq.front() << endl;
    cout << "end = " << dq.back() << endl;
}