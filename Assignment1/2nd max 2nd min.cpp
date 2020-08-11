#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    int smin=0,smax=0,temp=0;
    cout<<"Input numbers in array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
       }
    }
    smin=arr[1];
    smax=arr[n-2];

    cout<<"\nSecond min number is: "<<smin;
    cout<<"\nSecond max number is: "<<smax<<"\n";




    return 0;
}
