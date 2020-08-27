#include<iostream>
using namespace std;

bool testPalindrome(string st){
    static int s=0,l=st.length()-1;
    if(st[s]!=st[l]){
        return false;
    }
    if(s==l){
        return true;
    }
    ++s;
    --l;

    return testPalindrome(st);
}

int main(){

    string st;
    cout<<"Input string: ";
    cin>>st;
    if(testPalindrome(st)){
        cout<<"Given string is a Palindrome.";
    }
    else{
        cout<<"Given string is not a Palindrome.";
    }

    return 0;
}
