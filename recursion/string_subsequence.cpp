#include<iostream>
#include<vector>
using namespace std;

void f(string &str , int i , string result , vector<string> &list)
{
   // base case
   if(i==str.length())
   {
    list.push_back(result);
    return;
   }

   f(str , i+1 , result+str[i] , list) ; // include
   f(str , i+1 , result , list) ; // exclude
}

int main()
{
    vector<string> list;
    string str = "bbb";
    f(str , 0 , " " , list);

    for(int i=0 ; i<list.size() ; i++ )
    {
        cout << list[i] << " ";
    }
    return 0;

}