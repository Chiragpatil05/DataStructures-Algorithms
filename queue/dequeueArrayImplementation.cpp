#include<iostream>
using namespace std;

class Dequeue{
    private:
        int* arr;
        int size;
        int front;
        int rear;
    
    public:
        Dequeue(int n){
            size = n;
            arr = new int[n];
            front = -1;
            rear = -1;
        }

        void ifFull(){
            if((rear + 1) % size == front){
                cout << "Dequeue is full" << endl;
            }
            else cout << "Dequeue has some elements" << endl;
        }

        void isEmpty(){
            if(front == -1){
                cout << "Dequeue is empty" << endl;
            }
            else cout << "Dequeue has some elements" << endl;
        }

        void push_front(int x){
            if(front == -1){
                front = rear = 0;
                arr[0] = x;
                return;
            }
            else if((rear + 1) % size == front){
                cout << "Dequeue oveflow/full" << endl;
            }
            else{
                front = (front - 1 + size) % size;
                arr[front] = x;
                return;
            }
        }

        void push_back(int x){
            if(front == -1){
                front = rear = 0;
                arr[0] = x;
                return;
            }
            else if((rear + 1) % size == front){
                cout << "Dequeue oveflow/full" << endl;
            }
            else{
                rear = (rear + 1) % size;
                arr[rear] = x;
                return;
            }
        }

        void pop_front(){
            if(front == -1){
                cout << "Queue underflow/empty" << endl;
            }
            else{
                if(front == rear){
                    front = rear = -1;
                }
                else{
                    front = (front + 1) % size;
                }
            }
        }

        void pop_back(){
            if(front == -1){
                cout << "Queue underflow/empty" << endl;
            }
            else{
                if(front == rear){
                    front = rear = -1;
                }
                else{
                    rear = (rear - 1 - size) % size;
                }
            }
        }

        void start(){
            if(front == -1){
                cout << "Queue underflow/empty" << endl;
            }
            else{
                cout << "start = " << arr[front] << endl;
            }
        }

        void end(){
            if(front == -1){
                cout << "Queue underflow/empty" << endl;
            }
            else{
                cout << "end = " << arr[rear] << endl;
            }
        }

};


int main(){
    Dequeue dq(5);
    dq.push_front(8);
    dq.push_front(45);
    dq.push_back(99);
    dq.push_front(29);
    dq.push_back(76); 

    dq.pop_front();
    dq.pop_front();
    dq.pop_back();
    
    dq.start();
    dq.end();
}
