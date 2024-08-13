#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class queue{
    public:
        Node* front;
        Node* rear;

    queue(){
        front = NULL;
        rear = NULL;
    }

    void isEmpty(){
        if(front == NULL) cout << "queue is empty" << endl;
        else cout << "queue is not empty" << endl;
    }

    void push(int x){
        if(front == NULL){
            front = new Node(x);
            rear = front;
            return;
        }
        else{
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop(){
        if(front == NULL) cout << "queue underflow" << endl;
        else{
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    void frontElement(){
        if(front == NULL) cout << "queue is empty" << endl;
        else cout << "front = " << front->data << endl;
    }
};

int main(){
    queue q;
    // q.isEmpty();
    // q.frontElement();
    q.push(8);
    q.push(31);
    q.push(45);
    q.push(95);
    q.push(834);
    q.pop();
    q.pop();
    q.pop();

    q.isEmpty();
    q.frontElement();
}