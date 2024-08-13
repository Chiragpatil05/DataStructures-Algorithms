#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class Dequeue{
    public:
        Node* front;
        Node* rear;

        Dequeue(){
            front = NULL;
            rear = NULL;
        }

        void push_front(int x){
            if(front == NULL){
                front = rear = new Node(x);
                return;
            }
            else{
                Node* temp = new Node(x);
                temp->next = front;
                front->prev = temp;
                front = temp;
                return;
            }
        }

        void push_back(int x){
            if(front == NULL)
            {
                front = rear = new Node(x);
                return;
            }
            else{
                Node* temp = new Node(x);
                rear->next = temp;
                temp->prev = rear;
                rear = temp;
                return;
            }
        }

        void pop_front(){
            if(front == NULL){
                cout << "Dequeue is empty " << endl;
                return;
            }
            else{
                Node* temp = front;
                front = front->next;
                delete temp;
                if(front) front->prev = NULL;
                else rear = NULL;
            }
        }

        void pop_back(){
            if(front == NULL){
                cout << "Dequeue is empty" << endl;
                return;
            }
            else{
                Node* temp = rear;
                rear = rear->prev;
                delete temp;
                if(rear) rear->next = NULL;
                else front = NULL;
            }
        }

        void start(){
            if(front == NULL){
                cout << "Dequeue is empty" << endl;
                return;
            }
            else{
                cout << "start = " << front->data << endl;
            }
        }

        void end(){
            if(front == NULL){
                cout << "Dequeue is empty" << endl;
                return;
            }
            else{
                cout << "end = " << rear->data << endl;
            }
        }
};

int main(){
    Dequeue dq;
    // dq.start();
    // dq.end();

    dq.push_front(5);
    dq.push_front(18);
    dq.push_front(26);
    dq.push_back(1);
    dq.push_back(36);
    dq.push_back(11);
    dq.pop_back();
    dq.pop_back();
    dq.pop_front();
    dq.start();
    dq.end();
}