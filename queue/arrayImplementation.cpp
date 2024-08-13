#include<iostream>
using namespace std;

class queue{
    public:
        int *arr;
        int size;
        int front; // front se element pop hoga 
        int rear; // rear se element push hoga

    queue(int n){
            size = n;
            arr = new int[n];
            front = -1;
            rear = -1;
        }

    void isEmpty(){
        if(front == -1){
            cout << "Queue is empty" << endl;
        }
        else{
            cout << "Queue is not empty" << endl;
        }
    }

    void isFull(){
        if(rear == size-1){
            cout << "Queue is full" << endl;
        }
        else{
            cout << "Queue is not full" << endl;
        }
    }

    void push(int x){
        if(front == -1){
            front = 0;
            rear = 0;
            arr[0] = x;
        }
        else if(rear == size-1){
            cout << "Queue overflow" << endl;
        }
        else{
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    void pop(){
        if(front == -1){
            cout << "Queue underflow" << endl;
        }
        else{
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                front = front + 1;
            }
        }
    }

    void start(){
        if(front == -1){
            cout << "Queue is empty" << endl;
        }
        else{
            cout << arr[front] << endl;
        }
    }
};

int main(){
    queue q1(5);
    q1.push(66);
    q1.pop();
    q1.push(33);
    q1.push(74);
    q1.push(25);


    q1.start();
    q1.isEmpty();
}