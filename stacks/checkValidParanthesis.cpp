#include<iostream>
#include<stack>
using namespace std;

bool checkValidParanthesis(string str){
    stack<char> st;
    int n = str.size();

    for(int i=0 ; i<n ; i++){
        // opening bracket
        if(str[i] == '('){
            st.push(str[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                st.pop();
            }
        }
    }

    return st.empty();
}

int main(){
    string s; // ( ( ) ) )
    cout << "enter the paranthesis string : " ;
    cin >> s;

    bool ans = checkValidParanthesis(s);
    if(ans){
        cout << "valid paranthesis" << endl;
    }
    else{
        cout << "invalid paranthesis" << endl;
    }

    return 0;
}