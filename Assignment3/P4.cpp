#include<iostream>
#include<cmath>
using namespace std;
inline float sphereVolume(float radius){
    return (4.0 / 3.0 * 3.14159 * pow(radius, 3));
}

int main(){

    float radius=0,volume=0;
    cout<<"Input radius of sphere: ";
    cin>>radius;
    volume=sphereVolume(radius);
    cout<<"\nVolume of sphere: "<<volume;


    return 0;
}
