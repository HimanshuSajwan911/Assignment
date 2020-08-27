#include<iostream>
using namespace std;
template <typename T>
void printArray(T arr[],int s,int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,s=0,e=0;
    cout<<"Input size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Input elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Input starting and ending number: ";
    cin>>s>>e;
    printArray(arr,s,e);



    return 0;
}
