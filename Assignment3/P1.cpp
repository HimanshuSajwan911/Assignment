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
    void showData(){
        cout<<r<<"+"<<i<<"i";
    }
    friend istream& operator >>(istream &din,Complex &c){
       cin>>c.r>>c.i;
       return cin;
    }

    friend ostream& operator <<(ostream &dout,Complex c){
       cout<<c.r<<"+"<<c.i<<"i";
       return cout;
    }
};

int main(){

    Complex c1;
    cout<<"Input a complex number: ";
    cin>>c1;
    cout<<c1;

    return 0;
}
