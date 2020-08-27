#include<iostream>
using namespace std;

int main(){

    int side1=3,side2=4,hypotenuse=5;
    for(int i=side1;i<=500;i++){
        for(int j=side2;j<=500;j++){
            for(int k=hypotenuse;k<=500;k++){
                if((i*i)+(j*j)==(k*k)){
                    side2=i;
                    cout<<i<<","<<j<<","<<k<<"\n";
                }
            }
        }
    }
    return 0;
}
