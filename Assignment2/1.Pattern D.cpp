#include<iostream>
using namespace std;
int main(){

    int row=0,col=0;
    cout<<"Input a number: ";
    cin>>col;

    for(int i=0;i<col;i++){
        for(int sp=0;sp<col-1-i;sp++){
            cout<<" ";
        }
        if(i>0)cout<<"*";
        for(int sp=0;sp<2*i-1;sp++){
            cout<<" ";
        }
        cout<<"*\n";

    }
    int x=(col-2);
    for(int i=0;i<col-1;i++){
        for(int sp=0;sp<=i;sp++){
            cout<<" ";
        }
        cout<<"*";

        for(int j=0;j<2*x-1;j++){
            cout<<" ";
        }
        x--;
        if(i<col-2){
            cout<<"*\n";
        }

    }


    return 0;
}

