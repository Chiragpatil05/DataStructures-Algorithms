#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// approach 1
// time complexity - O(N)
// space complexity - O(1)
void printQueue(queue<int> &q){
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout << temp << " ";
    }
}



// approach 2 - print queue elements without deleting elements from queue
// time complexity - O(N)
// space complexity - O(N)
void printQueue2(queue<int> &q){
    vector<int> ans;
    while(!q.empty()){
        cout << q.front() << " ";
        ans.push_back(q.front());
        q.pop();
    }
    for(int i=0 ; i<ans.size() ; i++){
        q.push(ans[i]);
    }
}



// approach 3 - print queue elements without deleting elements from queue and using constant space
// time complexity - O(N)
// space complexity - O(1)
void printQueue3(queue<int> &q){
    int n = q.size();
    while(n--){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
}


int main(){
    queue<int> q;
    // cout << q.empty();
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);

    // cout << q.empty() << endl;
    // cout << q.size() << endl;

    // printQueue(q);

    // printQueue2(q);
    // cout << q.front();

    printQueue3(q);
    cout << endl;
    cout << q.front();
}
