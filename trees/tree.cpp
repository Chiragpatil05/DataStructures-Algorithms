#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    
        Node(int value){
            data = value;
            left = NULL;
            right = NULL;
        }
};

void preOrder(Node* root){
    if(root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node* BinaryTree(){
    int x;
    cin >> x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);

    cout << "enter the left child for node " << temp->data << " : ";
    temp->left = BinaryTree();    

    cout << "enter the right child for node " << temp->data << " : ";
    temp->right = BinaryTree();    

    return temp;
}

int main(){
//     // creating tree , method1 : level order traversal
//     int rootData,leftData,rightData;
//     cout << "enter the root node data : ";
//     cin >> rootData;

//     queue<Node*> q;

//     Node* root = new Node(rootData);
//     q.push(root);

//     while(!q.empty()){
//         Node* temp = q.front();
//         q.pop();

//         cout << "enter the left child for node " << temp->data << " : ";
//         cin >> leftData;

//         if(leftData != -1){
//             temp->left = new Node(leftData);
//             q.push(temp->left);
//         }

//         cout << "enter the right child for node " << temp->data << " : ";
//         cin >> rightData;

//         if(rightData != -1){
//             temp->right = new Node(rightData);
//             q.push(temp->right);
//         }
//     }

    cout << "enter the root node : ";
    Node* root;
    root = BinaryTree();

    cout << endl;
    cout << "pre order : " ;
    preOrder(root);
    cout << endl;

    cout << "in order : ";
    inOrder(root);
    cout << endl;

    cout << "post order : ";
    postOrder(root);
    cout << endl;
}
