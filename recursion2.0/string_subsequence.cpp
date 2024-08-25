#include<bits/stdc++.h>
using namespace std;

void subsequence(string &str , int n , int index , string &temp , vector<string> &ans){
    if(index == n){
        ans.push_back(temp);
        return ;
    }
    // exclude
    subsequence(str , n , index+1 , temp , ans);

    // incldue
    temp.push_back(str[index]);
    subsequence(str , n , index+1 , temp , ans);
    temp.pop_back();
}

int main(){
    string str;
    cout << "enter the string : " ;
    cin >> str;

    int n = str.length();
    int index = 0;
    string temp; // to store intermediate subsequence string
    vector<string> ans; // to store all the subsequence

    subsequence(str , n , index , temp , ans);

    cout << "total subsequences of string = " << pow(2,n) << endl;

    cout << "subsequences are : " << endl;
    for(int i=0 ; i<ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}


/* ------ if we want to remove the empty subsequence "" from ans ----------------

void subsequence(string &s , int n , int index , string &temp , vector<string> &ans)
{
	if(index == n){
	    ans.push_back(temp);
	    return;
    }
	      // exclude
	subsequence(s , n , index+1 , temp , ans);

	      // include
	temp.push_back(s[index]);
	subsequence(s , n , index+1 , temp , ans);
	temp.pop_back();
}
	
vector<string> AllPossibleStrings(string s){
	int n = s.length();
	int index = 0;
	string temp;
	vector<string> ans;

    subsequence(s , n , index , temp , ans);
     // we have to remove empty subsequence
    auto it = find(ans.begin() , ans.end() , "");
    if(it != ans.end()){ // matlab mil gaya
        ans.erase(it);
    }
            
    sort(ans.begin() , ans.end());
    return ans;
}

*/