#include<iostream>
using namespace std;
int main(){

    int tip=0,tail=0;
    cout<<"Input tip to tail ratio: ";
    cin>>tip>>tail;

    for(int i=0;i<tip;i++){
        for(int s=tip-i-1;s>0;s--){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0;i<tail;i++){
        for(int s=0;s<tip-1;s++){
            cout<<" ";
        }
        cout<<"*\n";
    }

    return 0;
}
