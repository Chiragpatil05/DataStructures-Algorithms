#include<iostream>
#include<vector>
using namespace std;

void f(string &str , int i , string result , vector<string> &li , vector<string> &v)
{
    // base case
    if(i==str.size())
    {
        li.push_back(result);
        return;
    }

    int digit = str[i]-'0';
    
    for(int j=0 ; j<v[digit].size() ; j++)
    {
        f(str , i+1 , result+v[digit][j] , li , v);
    }
    return ;
}

int main()
{
 // mapping
 vector<string> v(10);
 v = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 string str="0";
 vector<string> li;
 f(str,0," ",li,v);
 for(int i=0 ; i<li.size() ; i++)
 {
    cout << li[i] << " ";
 }

 return 0;
}