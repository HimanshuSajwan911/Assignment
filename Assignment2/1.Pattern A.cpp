#include<iostream>
using namespace std;
int main(){

    int row=0,col=0;
    cout<<"Input row and column: ";
    cin>>row>>col;

    for(int i=0;i<col;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0;i<row-2;i++){
        cout<<"*";
        for(int j=0;j<col-2;j++){
            cout<<" ";
        }
        cout<<"*\n";
    }
    for(int i=0;i<col;i++){
        cout<<"*";
    }

    return 0;
}
