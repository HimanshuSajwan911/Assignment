#include<iostream>
#include<stdio.h>
using namespace std;

float calculateCharges(float hour){
    if(hour>=24){
        return 10;
    }
    float charges=2;
    while(hour>3){
        hour--;
        charges+=0.5;
    }

    return charges;
}


int main(){

    float h1=0,h2=0,h3=0,c1=0,c2=0,c3=0,tHour=0,tCharges=0;
    cout<<"Input Hour1 Hour2 Hour3: ";
    cin>>h1>>h2>>h3;
    c1=calculateCharges(h1);
    c2=calculateCharges(h2);
    c3=calculateCharges(h3);
    tHour=h1+h2+h3;
    tCharges=c1+c2+c3;
    cout<<"Output:-\n";
    cout<<"Car      Hours       Charge\n";
    printf("1        %.2f        %.2f\n",h1,c1);
    printf("2        %.2f        %.2f\n",h2,c2);
    printf("3        %.2f        %.2f\n",h3,c3);
    printf("Total    %.2f        %.2f\n",tHour,tCharges);

    return 0;
}
