#include<iostream>
using namespace std;

//node implementation
class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout << "memory is free for node with data " << value << endl;
        }
};

// insert at head or start of linekd list
void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// insert at tail or end of linked list
void insertAtTail (Node* &tail , int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

//insert at any position
void insertAtPosition(Node* &head , Node* &tail , int position , int data){
    // insert at head or starting position
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // insert at tail or insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

// deleting a node in a linked list
void deleteNode(Node* &head , int position){
    // deleting first node 
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    //deleting any node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// print linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    print(head);
   insertAtHead(head,40);
   insertAtHead(head,50);
   print(head);
   
   insertAtPosition(head,tail,5,25);
   insertAtPosition(head,tail,1,100);
   insertAtPosition(head,tail,8,120);
   print(head);

   deleteNode(head,1);
   deleteNode(head,7);
   deleteNode(head,4);
   print(head);

   cout << " head = " << head->data << endl;
   cout << " tail = " << tail->data << endl;

}