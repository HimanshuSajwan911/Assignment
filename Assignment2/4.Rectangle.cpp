#include<iostream>
using namespace std;

class Rectangle{
private:
    float length=1,width=1;

public:
    void setDimension(float length,float width){
        if(length<0||length>20){
            this->length=1;
        }
        else{
            this->length=length;
        }
        if(width<0||width>20){
            this->width=1;
        }
        else{
            this->width=width;
        }

    }
    float getLength(){
        return length;
    }
    float getWidth(){
        return width;
    }
    float getPerimeter(){
        return 2*(length+width);
    }
    float getArea(){
        return (length*width);
    }


};

int main(){

    Rectangle Rect;
    Rect.setDimension(11,12.3);
    cout<<"Length: "<<Rect.getLength()<<"m\nWidth: "<<Rect.getWidth()<<"m";
    cout<<"\nPerimeter: "<<Rect.getPerimeter()<<"m";
    cout<<"\nArea: "<<Rect.getArea()<<"m^2\n";


    return 0;
}
