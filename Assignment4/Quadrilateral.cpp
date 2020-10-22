#include<iostream>
using namespace std;

class Quadrilateral{

private:
    double SIDEA,SIDEB,SIDEC,SIDED;

protected:
    void setSideA(double sidea){
        SIDEA=sidea;
    }
    void setSideB(double sideb){
        SIDEB=sideb;
    }
    void setSideC(double sidec){
        SIDEC=sidec;
    }
    void setSideD(double sided){
        SIDED=sided;
    }

    double getSideA(){
        return SIDEA;
    }
    double getSideB(){
        return SIDEB;
    }
    double getSideC(){
        return SIDEC;
    }
    double getSideD(){
        return SIDED;
    }

    Quadrilateral(){
        SIDEA=0;
        SIDEB=0;
        SIDEC=0;
        SIDED=0;
    }

    virtual void printID()=0;
    virtual double getPerimeter()=0;
    virtual double getArea()=0;
};

class Square:public Quadrilateral{

public:
    void printID(){
        cout<<"Square.";
    }
    virtual void setSide(double side){
        setSideA(side);
        setSideB(side);
        setSideC(side);
        setSideD(side);
    }
    double getSide(){
        return getSideA();
    }
    double getPerimeter(){
        return 4*getSideA();
    }
    double getArea(){
        double side=getSideA();
        return side*side;
    }

};

class Rectangle:public Quadrilateral{

public:
    void printID(){
        cout<<"Rectangle.";
    }
    void setLength(double length){
        setSideB(length);
        setSideD(length);
    }
    void setWidth(double width){
        setSideA(width);
        setSideC(width);
    }
    double getPerimeter(){
        return 2*(getSideA()+getSideB());
    }
    double getArea(){
        return getSideA()*getSideB();
    }
    double getLength(){
        return getSideB();
    }
    double getWidth(){
        return getSideA();
    }

};

class Parallelogram:public Quadrilateral{

public:
    void printID(){
        cout<<"Parallelogram.";
    }
    void setLength(double length){
        setSideB(length);
        setSideD(length);
    }
    void setWidth(double width){
        setSideA(width);
        setSideC(width);
    }
    double getPerimeter(){
        return 2*(getSideA()+getSideB());
    }
    double getArea(){
        return getSideA()*getSideB();
    }
    double getLength(){
        return getSideB();
    }
    double getWidth(){
        return getSideA();
    }

};

class Trapezoid:public Quadrilateral{
private:
    double HEIGHT;
public:
    Trapezoid(){
        HEIGHT=0;
    }
    void printID(){
        cout<<"Trapezoid.";
    }

    void setBaseLower(double baseL){
        setSideD(baseL);
    }
    void setBaseUpper(double baseU){
        setSideB(baseU);
    }
    void setSide_A(double sideA){
        setSideA(sideA);
    }
    void setSide_B(double sideB){
        setSideC(sideB);
    }

    double getPerimeter(){
        return getSideA()+getSideB()+getSideC()+getSideD();
    }
    double getArea(){
        return ((getSideB()+getSideD())/2)*HEIGHT;
    }
    void setHeight(double height){
        HEIGHT=height;
    }

};

int main(){

    Square square;
    square.setSide(5);

    cout<<"ID: ";
    square.printID();
    cout<<"\nPerimeter: "<<square.getPerimeter();
    cout<<"\nArea: "<<square.getArea();

    cout<<"\n\n";

    Rectangle rect;
    rect.setLength(12);
    rect.setWidth(10.1);
    cout<<"ID: ";
    rect.printID();
    cout<<"\nPerimeter: "<<rect.getPerimeter();
    cout<<"\nArea: "<<rect.getArea();

    cout<<"\n\n";

    Parallelogram para;
    para.setLength(10.3);
    para.setWidth(15.5);
    cout<<"ID: ";
    para.printID();
    cout<<"\nPerimeter: "<<para.getPerimeter();
    cout<<"\nArea: "<<para.getArea();

    cout<<"\n\n";

    Trapezoid trap;
    trap.setBaseLower(10.3);
    trap.setBaseUpper(15.5);
    trap.setSide_A(5.9);
    trap.setSide_B(6.3);
    trap.setHeight(5);
    cout<<"ID: ";
    trap.printID();
    cout<<"\nPerimeter: "<<trap.getPerimeter();
    cout<<"\nArea: "<<trap.getArea();
    
    cout<<"\n";

    return 0;
}
