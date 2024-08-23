#include<iostream> 
using namespace std;

int countVowels(string s , int n , int index){
    if(index == n) return 0;

    if(s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') return 1 + countVowels(s , n , index+1);
    
    else return countVowels(s , n , index);
}

int countVowels2(string s , int index){
    if(index == -1) return 0;

    if(s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') {
        return 1 + countVowels2(s , index - 1);
    }
    
    else return countVowels2(s , index - 1);
}

int main(){
    string s;
    cout << "Enter the string : " ;
    cin >> s;

    int n = s.length();
    int consonents = 0;
    int vowels = 0; 
    int index = 0;
    int lastIndex = n-1;

    // int ans = countVowels(s , n , index);
    // cout << "vowels = " << ans << endl;

    int ans2 = countVowels2(s , lastIndex);
    cout << "vowels = " << ans2 << endl;
    /* 
        for(int i=0 ; i<n ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
            ){
                vowels ++;
            }
            else{
                consonents++;
            }
        }
    */


    // cout << "vowels = " << vowels << endl;
    // cout << "consonents = " << consonents << endl;

}