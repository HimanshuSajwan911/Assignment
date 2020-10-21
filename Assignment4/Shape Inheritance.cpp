#include<iostream>
#include<cmath>
using namespace std;

class Shape{
protected:
    string NAME;
    double AREA;

    Shape(){
        NAME="";
        AREA=0;
    }

    virtual string getName()=0;
    virtual double getArea()=0;
    virtual void draw()=0;

};

class TwoDShape:public Shape{
protected:

    virtual double getPerimeter()=0;
    virtual string getName()=0;
    virtual double getArea()=0;
    virtual void draw()=0;

};

class Quadrilateral:public TwoDShape{
protected:
    double SIDE_A,SIDE_B,SIDE_C,SIDE_D;

    Quadrilateral(){
        SIDE_A=0;
        SIDE_B=0;
        SIDE_C=0;
        SIDE_D=0;
    }
    virtual double getPerimeter()=0;
    virtual string getName()=0;
    virtual double getArea()=0;
    virtual void draw()=0;
};

class Square:public Quadrilateral{
public:
    Square(double side=0){
        NAME="Square";
        SIDE_A=SIDE_B=SIDE_C=SIDE_D=side;
    }
    string getName(){
        return NAME;
    }
    void setSide(double side){
        SIDE_A=SIDE_B=SIDE_C=SIDE_D=side;
    }
    double getPerimeter(){
        return (4*SIDE_A);
    }
    double getArea(){
        return (SIDE_A*SIDE_A);
    }
    void draw(){
        cout<<"Drawing Square...";
    }
};

class Rectangle:public Quadrilateral{
public:
    Rectangle(double length=0,double width=0){
        NAME="Rectangle";
        SIDE_B=SIDE_D=length;
        SIDE_A=SIDE_C=width;
    }
    string getName(){
        return NAME;
    }
    void setLength(double length){
        SIDE_B=SIDE_D=length;
    }
    void setWidth(double width){
        SIDE_A=SIDE_C=width;
    }
    double getPerimeter(){
        return 2*(SIDE_A+SIDE_B);
    }
    double getArea(){
        return (SIDE_A*SIDE_B);
    }
    void draw(){
        cout<<"Drawing Rectangle...";
    }
};

class Trapezoid:public Quadrilateral{
private:
    double HEIGHT;
public:
    Trapezoid(){
        HEIGHT=0;
        NAME="Trapezoid";
    }

    void setBaseLower(double baseL){
        SIDE_D=baseL;
    }
    void setBaseUpper(double baseU){
        SIDE_B=baseU;
    }
    void setSide_A(double sideA){
        SIDE_A=sideA;
    }
    void setSide_B(double sideB){
        SIDE_B=sideB;
    }
    void setHeight(double height){
        HEIGHT=height;
    }

    double getPerimeter(){
        return SIDE_A+SIDE_B+SIDE_C+SIDE_D;
    }
    double getArea(){
        return ((SIDE_B+SIDE_D)/2)*HEIGHT;
    }

};

class Ellipse:public TwoDShape{
protected:
    double MAJOR_RADIUS,MINOR_RADIUS;

public:
    Ellipse(double RadiusMajor=0,double RadiusMinor=0){
        NAME="Ellipse";
        MAJOR_RADIUS=RadiusMajor;
        MINOR_RADIUS=RadiusMinor;
    }

    virtual void draw(){
        cout<<"Drawing Ellipse...";
    }
    virtual void setMajorRadius(double RadiusMajor){
        MAJOR_RADIUS=RadiusMajor;
    }
    virtual void setMinorRadius(double RadiusMinor){
        MINOR_RADIUS=RadiusMinor;
    }

    double getMajorRadius(){
        return MAJOR_RADIUS;
    }
    double getMinorRadius(){
        return MINOR_RADIUS;
    }
    virtual string getName(){
        return NAME;
    }
    virtual double getPerimeter(){
        return 2*3.14*sqrt((MAJOR_RADIUS*MAJOR_RADIUS + MINOR_RADIUS*MINOR_RADIUS)/(2));
    }
    virtual double getArea(){
        return 3.14*MAJOR_RADIUS*MINOR_RADIUS;
    }
};

class Rhombus:public Quadrilateral{
protected:
    double DIAGONAL_A,DIAGONAL_B;

public:
    Rhombus(){
        NAME="Rhombus";
        DIAGONAL_A=0;
        DIAGONAL_B=0;
    }
    virtual string getName(){
        return NAME;
    }
    void setDiagonal_A(double diagonalA){
        DIAGONAL_A=diagonalA;
    }
    void setDiagonal_B(double diagonalB){
        DIAGONAL_B=diagonalB;
    }
    void setSide(double side){
        SIDE_A=SIDE_B=SIDE_C=SIDE_D=side;
    }

    double getDiagonal_A(){
        return DIAGONAL_A;
    }
    double getDiagonal_B(){
        return DIAGONAL_B;
    }
    double getSide(){
        return SIDE_A;
    }
    double getArea(){
        return 0.5*DIAGONAL_A*DIAGONAL_B;
    }
    double getPerimeter(){
        return 4*SIDE_A;
    }
};


class Circle:public Ellipse{
public:
    Circle(double radius=0){
        NAME="Circle";
        MAJOR_RADIUS=MINOR_RADIUS=radius;
    }
    void setRadius(double radius){
        MAJOR_RADIUS=MINOR_RADIUS=radius;
    }
    double getRadius(){
        return MAJOR_RADIUS;
    }
    virtual void draw(){
        cout<<"Drawing Circle...";
    }

    virtual double getPerimeter(){
        return 2*3.14*MAJOR_RADIUS;
    }
    virtual double getArea(){
        return 3.14*MAJOR_RADIUS*MAJOR_RADIUS;
    }

};

class ThreeDShape:public Shape{
protected:

    virtual double getPerimeter()=0;
    virtual void setName(string)=0;
    virtual string getName()=0;
    virtual double getArea()=0;
    virtual double getVolume()=0;
    virtual void draw()=0;

};

int main(){

    Square s;
    s.setSide(5);
    cout<<"Name: "<<s.getName();
    cout<<"\nPerimeter: "<<s.getPerimeter();
    cout<<"\nArea: "<<s.getArea();

    return 0;
}
