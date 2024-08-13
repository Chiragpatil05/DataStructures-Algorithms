#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the length of the series : " ;
    cin >> n;

    int first_number = 0;
    int second_number = 1;

    cout << first_number << " " << second_number << " ";

    for(int i=0 ; i<n ; i++){
        int next_num = first_number + second_number;
        cout << next_num << " " ;
        first_number = second_number;
        second_number = next_num;
    }

    return 0;
}