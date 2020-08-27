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
    friend istream& operator >>(istream &cin,Complex &c){
       cin>>c.r>>c.i;
       return cin;
    }
    friend ostream& operator <<(ostream &cout,Complex c){
       cout<<c.r<<"+"<<c.i<<"i";
       return cout;
    }
    int operator==(Complex c){
        if(r==c.r&&i==c.i){
            return 1;
        }
        return 0;
    }
    int operator!=(Complex c){
        if(r==c.r&&i==c.i){
            return 0;
        }
        return 1;
    }
};

int main(){

    Complex cA,cB;
    cout<<"Input complex number A: ";
    cin>>cA;
    cout<<"Input complex number B: ";
    cin>>cB;
    if(cA==cB){
        cout<<"complex A and B are equal.\n";
    }
    if(cA!=cB){
        cout<<"complex A and B are not equal.\n";
    }


    return 0;
}

