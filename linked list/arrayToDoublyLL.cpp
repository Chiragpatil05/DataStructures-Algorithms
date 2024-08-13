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

void print(Node* &head){
    Node* temp = head;

    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "enter the size of array " ;
    cin >> n;

    int arr[n];
    cout << "enter elements of array : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    cout << endl;

    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0 ; i<n ; i++){
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    print(head);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
}