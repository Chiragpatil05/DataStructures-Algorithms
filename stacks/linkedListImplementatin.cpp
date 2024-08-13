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

class stack{
    Node* top;
    int size;

    public:
        stack(){
            top = NULL;
            size = 0;
        }

        void push(int value){
            Node* temp = new Node(value);
            // nodes heap memeory mai store ho rhi hai , kisi time pe bohot jyada nodes ban gai toh overflow hojayega
            if(temp == NULL){
                cout << "Stack Overflow :-)" << endl;
            }
            temp->next = top;
            top = temp;
            size++;
            cout << value << " pushed into stack" << endl;
        }

        void pop(){
            if(top == NULL){
                cout << "Stack Underflow :-(" << endl;
            }
            else{
                Node* temp = top;
                cout << temp->data << " popped from stack" << endl;
                top = top->next;
                delete temp;
                size--;
            }
        }

        void stack_size(){
            if(top == NULL){
                cout << "stack is empty" << endl;
            }
            else{
                cout << "size of stack = " << size << endl;
            }
        }

        void isEmpty(){
            if(top == NULL){
                cout << "stack is empty" << endl;
            }
            else{
                cout << "stack has some elements" << endl;
            }
        }

        void peek(){
            if(top == NULL){
                cout << "stack is empty" << endl;
            }
            else{
                cout << "top of stack = " << top->data << endl;
            }
        }
};

int main(){
    stack st;
    // st.isEmpty();
    // st.peek();
    // st.stack_size();

    st.push(5);
    st.push(11);
    st.push(76);
    st.push(1);
    // st.isEmpty();
    // st.peek();
    // st.stack_size();

    st.pop();
    st.pop();
    st.isEmpty();
    st.peek();
    st.stack_size();

    return 0;
}