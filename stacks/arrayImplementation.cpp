#include<iostream>
using namespace std;

class stack{
    int *arr;
    int size;
    int top;

    public:
        stack(int s){
            size = s;
            arr = new int[s];
            top = -1;
        }

        // push operation
        void push(int value){
            if(top == size-1){
                cout << "Stack Overflow.." << endl;
                return;
            }
            else{
                top++;
                arr[top] = value;
                cout << value << " pushed into stack " << endl; 
            }
        }

        // pop operation
        void pop(){
            if(top == -1){
                cout << "Stack Underflow..." << endl;
                return;
            }
            else{
                cout << arr[top] << " popped from stack " << endl;
                top--;
            }
        }

        // top of stack 
        void peek(){
            if(top == -1){
                cout << "stack is empty" << endl;
                return;
            }
            else{
                cout << "top of stack is : " << arr[top] << endl;
            }
        }

        // size of stack
        void isSize(){
            cout << "size of stack is : " << top+1 << endl;
        }

        // is empty
        void isEmpty(){
            if(top == -1){
                cout << "stack is empty" << endl;
                return;
            }
        }
};

int main(){
    stack st(5);
    // st.peek();
    // st.isSize();

    st.push(5);
    st.push(-1);
    st.push(3);
    st.push(0);
    st.push(7);
    st.push(88);

    st.isEmpty();
    st.isSize();
    st.peek();

    return 0;
}