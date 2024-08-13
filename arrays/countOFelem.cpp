// --------------------------- COUNT FREQUENCY OF EACH ELEMENT ------------------------------------
#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,1,6,0,0,1,6,6,6,1,0,-1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int mark[size];


    
    for(int i=0 ; i<size ; i++)
    { 
        if(mark[i]!=1)
        {
         mark[i]=1;
        int element = arr[i];
        int count = 1;

        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[j]==element)
            {
                count ++;
                mark[j]=1;  // 1 for visited 
            }
        }
        cout << element << "->" << count << endl;
    }
    }

}