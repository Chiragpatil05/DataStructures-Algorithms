// ------------------ SORT BY PARITY ----------------
// even elements followed by odd elements 

#include<iostream>
#include<vector>
using namespace std;

vector<int> sort_by_parity(vector<int> v)
{
    vector<int> even;
    vector<int> odd;
    int size = v.size();

    for(int i=0 ; i<size ; i++)
    {
        if(v[i]%2==0)
        {
            even.push_back(v[i]);
        }
        else{
            odd.push_back(v[i]);
        }
    }
    even.insert(even.end() , odd.begin() , odd.end());
    return even;
}

int main()
{
    cout << "enter the size of array/vector : ";
    int n;
    cin >> n;

    vector<int> v;
    
    cout << "enter the elements of array : ";
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << endl;

    vector<int> ans = sort_by_parity(v);
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }


    return 0;
}