#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int value){
            data = value;
            next = NULL;
            prev = NULL;
        }
};

void insertAtStart(Node* &head , int data){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtEnd(Node* &head , int data){
    if(head == NULL){
        head = new Node(data);
    }
    else{
        Node* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        curr->next = temp;
        temp->prev = curr;
    }
}

void insertAtPosition(Node* &head , int data , int &position){
    // insert at the start
    if(position == 0){
        insertAtStart(head , data);
        return;
    }


    Node* curr = head;
    position--;
    while(position--){
        curr = curr->next;
    }

    // insert the end of the linked list
    if(curr->next == NULL){
        insertAtEnd(head , data);
        return;
    }

    Node* temp = new Node(data);
    
    temp->next = curr->next;
    temp->prev = curr;
    curr->next = temp;
    temp->next->prev = temp;
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}

void deleteFromStart(Node* &head){
    if(head == NULL){
        cout << "Doubly linked list is empty , nothing to delete" << endl;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete temp;

        if(head){
        head->prev = NULL;
        }
    }
}

void deleteFromEnd(Node* &head){
    if(head == NULL){
        cout << "Doubly Linked List is empty , nothing to delete" << endl;
    }

    // only one node
    if(head->next == NULL){
        delete head;
        head = NULL;
    }

    else{
        Node* curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->prev->next = NULL;
        delete curr;
    }
}

void deleteFromPosition(Node* &head , int position){
    if(head == NULL){
        cout << "Doubly linked list is empty , nothing to delete" << endl;
    }

    if(position == 1){
        deleteFromStart(head);
        return;
    }

    Node* curr = head;
    position--;
    while(position--){
        curr = curr->next;
    }

    if(curr->next == NULL){
        deleteFromEnd(head);
        return;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete curr;

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtStart(head,14);
    insertAtStart(head,35);
    insertAtStart(head,76);
    insertAtStart(head,5);
    insertAtStart(head,1);

    insertAtEnd(head,10);
    insertAtEnd(head,99);

    int position = 4;
    insertAtPosition(head , 50 , position);

    position = 0;
    insertAtPosition(head , 9 , position);

    position = 9;
    insertAtPosition(head , 11 , position);
    

    deleteFromStart(head);

    deleteFromEnd(head);
    print(head);
    cout << "head = " << head->data << endl;

    deleteFromPosition(head,5);
    print(head);
    cout << "head = " << head->data << endl;

    deleteFromPosition(head,1);
    print(head);
    cout << "head = " << head->data << endl;

    deleteFromPosition(head,6);
    print(head);
    cout << "head = " << head->data << endl;

    deleteFromPosition(head,2);
    print(head);
    cout << "head = " << head->data << endl;
}