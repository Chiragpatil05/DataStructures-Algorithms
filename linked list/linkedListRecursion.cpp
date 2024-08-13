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

Node* createEndLL(int arr[] , int size , int index){
    if(size == index) return NULL;

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createEndLL(arr,size,index+1);
    return temp;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
} 

Node* createStartLL(int arr[] , int size , int index){
    if(index < 0){
        return NULL;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createStartLL(arr,size,index-1);
    return temp;

}

int main(){
    int arr[] = {11,85,6,4,17,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    Node* head = createEndLL(arr,size,0);
    printLL(head);
    cout << "head = " << head->data << endl;

    head = createStartLL(arr,size,size-1);
    printLL(head);
    cout << "head = " << head->data << endl;
}