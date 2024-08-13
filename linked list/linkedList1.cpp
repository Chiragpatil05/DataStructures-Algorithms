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

void insertAtStart(Node* &head , int data){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node* temp;
        temp = new Node(data);
        temp->next = head;
        head = temp;
    }
}

void printLinkedList(Node* &head){
    Node* temp;
    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtEnd(Node* &head , int data){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
}

void insertAtPosition(Node* &head , int &position , int data){
    if(position == 1){
        insertAtStart(head,data);
        return;
    }

    Node* temp = head;
    position--;
    while(position--){
        temp = temp->next;
    }

    if(temp->next == NULL){
        insertAtEnd(head,data);
        return;
    }
    Node* temp2 = new Node(data);
    temp2->next = temp->next;
    temp->next = temp2;
}

void deleteFirstNode(Node* &head){
    if(head == NULL){
        cout << "Linked list is empty , nothing to delete" << endl;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteLastNode(Node* &head){
    if(head == NULL){
        cout << "Linked list is empty , nothing to delete" << endl;
    }
    else{
        if(head->next == NULL){
            Node* temp = head;
            head = NULL;
            delete temp;
        }
        else{
            Node* current = head;
            Node* previous = NULL;
            while(current->next != NULL){
                previous = current;
                current = current->next;
            }
            delete current;
            previous->next = NULL;
        }
    }
}

void deleteAtPosition(Node* &head , int &position){
    if(position == 1){
        deleteFirstNode(head);
        return;
    }
    Node* current = head;
    Node* previous = NULL;
    position--;
    while(position--){
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    delete current;

}

int main(){
    Node* head;
    head = NULL;

    insertAtStart(head,5);
    insertAtStart(head,10);
    insertAtStart(head,12);
    insertAtStart(head,16);
    printLinkedList(head);

    insertAtEnd(head,13);
    insertAtEnd(head,8);
    insertAtEnd(head,2);
    printLinkedList(head);

    insertAtStart(head,7);
    printLinkedList(head);
    
    int position = 4;
    insertAtPosition(head,position,11);

    position = 1;
    insertAtPosition(head,position,99);
    printLinkedList(head);
    
    position = 10;
    insertAtPosition(head,position,64);
    printLinkedList(head);

    deleteFirstNode(head);
    deleteLastNode(head);
    printLinkedList(head);

    position = 5;
    deleteAtPosition(head,position);
    printLinkedList(head);

    position = 1;
    deleteAtPosition(head,position);
    printLinkedList(head);

    position = 7;
    deleteAtPosition(head,position);
    printLinkedList(head);
    cout << "head = " << head->data << endl;

}