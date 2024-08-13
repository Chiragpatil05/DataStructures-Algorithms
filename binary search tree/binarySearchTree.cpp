#include<iostream>
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

Node* insert(Node* root , int target){ 
    if(root == NULL){
        Node* temp = new Node(target);
        return temp;
    }

    // left side
    if(target < root->data){
        root->left = insert(root->left , target);
    } // right side
    else{
        root->right = insert(root->right , target);
    }

    return root;
}

void inorder(Node* root){
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(Node* root , int target){
    if(root == NULL){
        return 0;
    }

    if(root->data == target){
        return 1;
    }

    if(root->data > target){
        return search(root->left , target);
    }
    else{
        return search(root->right, target);
    }
}

int main(){
    int n;
    cout << "enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "enter the elements of the array : ";
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    
    cout << "array is : ";
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }cout << endl;
    

    Node* root = NULL;
    for(int i=0 ; i<n ; i++){
        root = insert(root,arr[i]);
    }

    // traversing
    cout<< "inorder traversal : " << endl;
    inorder(root);
    cout << endl;

    // searching
    int target;
    cout << "enter the value to searched in tree : ";
    cin >> target;
    cout << search(root,target) << endl;

}