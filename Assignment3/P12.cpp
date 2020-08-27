#include<iostream>
using namespace std;

void stringReverse(string st,int s){
    if(st[s]){
        stringReverse(st,s+1);
    }
    else{
        return;
    }
    cout<<st[s];
}

int main(){

    int s=0;
    string st;
    cout<<"Input string: ";
    cin>>st;
    cout<<"Input stating position: ";
    cin>>s;
    cout<<"Reverse string: ";
    stringReverse(st,s);

    return 0;
}
