#include<iostream>
#include<cmath>
#include<limits>
using namespace std;

class Rectangle{
private:
    float x1,x2,x3,x4,y1,y2,y3,y4;
    float Length,Width;
    float LengthWidthArray[12];

    void init(){
        x1=1,x2=1,x3=1,x4=1,y1=1,y2=1,y3=1,y4=1;
        for(int i=0;i<12;i++){
            LengthWidthArray[i]=0;
        }
    }

     void checkCoordinates(){
        int position=0;

        if(x1==x2){
            LengthWidthArray[position]=fabs(y1-y2);
            position++;
        }
        if(x1==x3){
            LengthWidthArray[position]=fabs(y1-y3);
            position++;
        }
        if(x1==x4){
            LengthWidthArray[position]=fabs(y1-y4);
            position++;
        }
        if(x2==x3){
            LengthWidthArray[position]=fabs(y2-y3);
            position++;
        }
        if(x2==x4){
            LengthWidthArray[position]=fabs(y2-y4);
            position++;
        }
        if(x3==x4){
            LengthWidthArray[position]=fabs(y3-y4);
            position++;
        }

        if(y1==y2){
            LengthWidthArray[position]=fabs(x1-x2);
            position++;
        }
        if(y1==y3){
            LengthWidthArray[position]=fabs(x1-x3);
            position++;
        }
        if(y1==y4){
            LengthWidthArray[position]=fabs(x1-x4);
            position++;
        }
        if(y2==y3){
            LengthWidthArray[position]=fabs(x2-x3);
            position++;
        }
        if(y2==y4){
            LengthWidthArray[position]=fabs(x2-x4);
            position++;
        }
        if(y3==y4){
            LengthWidthArray[position]=fabs(x3-x4);
            position++;
        }

       Length=0,Width=numeric_limits<float>::max();
        for(int i=0;i<position;i++){
            if(LengthWidthArray[i]>Length){
                Length=LengthWidthArray[i];
            }
            if(LengthWidthArray[i]<Width&&LengthWidthArray[i]!=0){
                Width=LengthWidthArray[i];
            }
        }

    }


public:
    Rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
        init();
        setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
    }

    void setCoordinates(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
        if(x1>20){
            cout<<"\nx1 is greater than 20. Setting x1 to 1";
        }
        else{
            this->x1=x1;
        }
        if(y1>20){
            cout<<"\ny1 is greater than 20. Setting y1 to 1";
        }
        else{
            this->y1=y1;
        }

        if(x2>20){
            cout<<"\nx2 is greater than 20. Setting x2 to 1";
        }
        else{
            this->x2=x2;
        }
        if(y2>20){
            cout<<"\ny2 is greater than 20. Setting y2 to 1";
        }
        else{
            this->y2=y2;
        }

        if(x3>20){
            cout<<"\nx3 is greater than 20. Setting x3 to 1";
        }
        else{
            this->x3=x3;
        }
        if(y3>20){
            cout<<"\ny3 is greater than 20. Setting y3 to 1";
        }
        else{
            this->y3=y3;
        }

        if(x4>20){
            cout<<"\nx4 is greater than 20. Setting x4 to 1";
        }
        else{
            this->x4=x4;
        }
        if(y4>20){
            cout<<"\ny4 is greater than 20. Setting y4 to 1";
        }
        else{
            this->y4=y4;
        }
        checkCoordinates();
        if(isRectangle()==0){
            cout<<"\nGiven coordinates does not form a rectangle.";
        }


    }

    int isRectangle(){
        if(LengthWidthArray[0]==LengthWidthArray[1]&&LengthWidthArray[2]==LengthWidthArray[3]&&Length!=0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isSquare(){
        if(isRectangle()){
            for(int i=0;i<2;i++){
                if(LengthWidthArray[i]!=LengthWidthArray[i+1]||Length==0){
                    return 0;
                }
            }
            return 1;
        }
        else{
            return -1;
        }

    }
    float getLength(){
        if(isRectangle()){
            return Length;
        }
        else{
            return 0;
        }

    }
    float getWidth(){
       if(isRectangle()){
            return Width;
        }
        else{
            return 0;
        }
    }
    float getPerimeter(){
       if(isRectangle()){
            return 2*(Length+Width);
       }
       else{
            return 0;
       }
    }
    float getArea(){
       if(isRectangle()){
            return Length*Width;
       }
       else{
            return 0;
       }
    }


};

int main(){

    Rectangle Rect1(6,5,6,8,9,8,9,5);
    cout<<"Creating Rectangle with coordinates (6,5),(6,8),(9,8),(9,5).";
    cout<<"\nLength: "<<Rect1.getLength()<<"m\nWidth: "<<Rect1.getWidth()<<"m";
    int s=Rect1.isSquare();
    if(s){
        cout<<"\nThis Rectangle is a Square.";
    }
    else{
        cout<<"\nThis Rectangle is not a Square.";
    }
    cout<<"\nPerimeter: "<<Rect1.getPerimeter()<<"m";
    cout<<"\nArea: "<<Rect1.getArea()<<"m^2";

    cout<<"\n\n";
    Rectangle Rect2(1,1,1,5,4,5,4,1);
    cout<<"Creating Rectangle with coordinates (1,1),(1,5),(4,5),(4,1).";
    cout<<"\nLength: "<<Rect2.getLength()<<"m\nWidth: "<<Rect2.getWidth()<<"m";
    s=Rect2.isSquare();
    if(s){
        cout<<"\nThis Rectangle is a Square.";
    }
    else{
        cout<<"\nThis Rectangle is not a Square.";
    }
    cout<<"\nPerimeter: "<<Rect2.getPerimeter()<<"m";
    cout<<"\nArea: "<<Rect2.getArea()<<"m^2";
    cout<<"\n";

    cout<<"\nCreating Rectangle with coordinates (100,22),(30,40),(50,60),(70,80).";
    Rectangle Rect3(100,22,30,40,50,60,70,80);
    cout<<"\nLength: "<<Rect3.getLength();
    cout<<"\nWidth: "<<Rect3.getWidth();

    s=Rect3.isSquare();
    if(s==1){
        cout<<"\nThis Rectangle is a Square.";
    }
    else if(s==0){
        cout<<"\nThis Rectangle is not a Square.";
    }
    else {
        cout<<"\nThis is not a Rectangle.";
    }
    cout<<"\nPerimeter: "<<Rect3.getPerimeter()<<"m";
    cout<<"\nArea: "<<Rect3.getArea()<<"m^2";
    cout<<"\n";
    return 0;
}
