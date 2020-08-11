#include<iostream>
using namespace std;
int main(){

    int row=0,col=0;
    cout<<"Input row and column: ";
    cin>>row>>col;

    cout<<"   ";
    for(int i=0;i<col-2;i++){
        cout<<"*";
    }
    cout<<"\n *";
    for(int j=0;j<col;j++){
            cout<<" ";
    }
    cout<<"*\n";


    for(int i=0;i<row;i++){
        cout<<"*";
        for(int j=0;j<col+2;j++){
            cout<<" ";
        }
        cout<<"*\n";
    }

    cout<<" *";
    for(int j=0;j<col;j++){
            cout<<" ";
    }
    cout<<"*\n   ";
    for(int i=0;i<col-2;i++){
        cout<<"*";
    }

    return 0;
}
