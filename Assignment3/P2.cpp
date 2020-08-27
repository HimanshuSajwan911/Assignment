#include<iostream>
using namespace std;

class Complex{
private:
    float r,i;

public:
    void setData(float x,float y){
        r=x;
        i=y;
    }
    friend istream& operator >>(istream &cin,Complex &c){
       cin>>c.r>>c.i;
       return cin;
    }

    friend ostream& operator <<(ostream &cout,Complex c){
       cout<<c.r<<"+"<<c.i<<"i";
       return cout;
    }
    Complex operator*(Complex c){
        Complex temp;
        temp.r=r*c.r;
        temp.i=i*c.i;
        return temp;
    }

};

int main(){

    Complex c1,c2;
    c1.setData(2,3);
    c2.setData(4,5);
    cout<<"Complex A: "<<c1;
    cout<<"\nComplex B: "<<c2;
    cout<<"\nComplex A*B= "<<c1*c2;

    return 0;
}
