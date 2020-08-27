#include<iostream>
using namespace std;

int main(){
    int arr[10000];
    for(int i=0;i<10000;i++){
        arr[i]=1;
    }
    for(int i=2;i<10000;i++){
        if(arr[i]==1){
            for(int j=i+1;j<10000;j++){
                if(j%i==0){
                    arr[j]=0;
                }
            }
        }
    }
    cout<<"Prime Numbers from 2-9999:\n";
    for(int i=2;i<10000;i++){
        if(arr[i]==1){
            cout<<i<<" ";
        }
    }

    return 0;
}
