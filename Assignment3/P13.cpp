#include<iostream>
using namespace std;

int recursiveMinimum(int arr[],int s,int e){
    static int small=INT_MAX;
    if(s!=e){
        recursiveMinimum(arr,s+1,e);
    }
    else{
        return 0;
    }
    if(small>arr[s]){
        small=arr[s];
    }
    return small;
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

    cout<<"\nSmallest element: "<<recursiveMinimum(arr,s,e)<<"\n";


    return 0;
}
