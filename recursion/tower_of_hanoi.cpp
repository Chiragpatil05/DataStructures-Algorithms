#include<iostream>
using namespace std;

void toh(int n , int src , int des , int helper)
{
    // base case
    if(n==0) return ;
    toh(n-1 , src , helper , des);
    cout << " move disk from rod " << src << " to " << des << endl;
    toh(n-1 , helper , des , src);
}

int main()
{
    int n;
    cout << "enter the value of n : " ;
    cin >> n;
    
    toh(n,1,3,2);
}