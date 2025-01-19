#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* createTree(){
    int x;
    cin >> x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);

    cout << "enter the value for left of " << x << " : " ;
    temp->left = createTree();

    cout << "enter the value for right of " << x << " : " ;
    temp->right = createTree();

    return temp;

}

vector<vector<int>> levelOrderTraversal(Node* &root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;

    queue<Node*> q;
    q.push(root);

    while(1){
        int size = q.size();
        if(size == 0) return ans;
        vector<int> data;

        while(size > 0){
            Node* temp = q.front();
            q.pop();
            data.push_back(temp->data);

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);

            size--;
        }

        ans.push_back(data);
    }
    return ans;
}

void getAllPath(Node* &root , vector<int> &path , vector<vector<int>> &allPath){
    if(root == NULL) return;

    path.push_back(root->data);

    if(root->left == NULL && root->right == NULL) allPath.push_back(path);

    getAllPath(root->left , path , allPath);
    getAllPath(root->right , path , allPath);
    path.pop_back();
}

int main(){
    Node* root;
    cout << "enter the value of node : ";
    root = createTree();

    cout << endl;
    cout << "level order traversal : " << endl;
    vector<vector<int>> lot = levelOrderTraversal(root);
    for(vector<int> arr : lot){
        for(int i=0 ; i<arr.size() ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "all paths in tree : " << endl;
    vector<vector<int>> allPaths;
    vector<int> path;

    getAllPath(root , path , allPaths);
    for(vector<int> arr : allPaths){
        for(int x : arr){
            cout << x << " ";
        }
        cout << endl;
    }
}