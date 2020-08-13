#include<iostream>
#include<cmath>
#include<limits>
#include <windows.h>
#include<iomanip>
using namespace std;

class Rectangles{
private:
    float x1,x2,x3,x4,y1,y2,y3,y4;
    float LENGTH,WIDTH;
    float LengthWidthArray[12];
    char FillCharacter,PerimeterCharacter;
    int currentX,currentY,ScaleValue;
    int DrawX,DrawY;
    COORD coord;
    int ROTATE;


    void init(){
        x1=1,x2=1,x3=1,x4=1,y1=1,y2=1,y3=1,y4=1;
        ScaleValue=1;
        ROTATE=0;
        DrawX=0;DrawY=0;
        FillCharacter='+';
        PerimeterCharacter='-';
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

       LENGTH=0,WIDTH=numeric_limits<float>::max();
        for(int i=0;i<position;i++){
            if(LengthWidthArray[i]>LENGTH){
                LENGTH=LengthWidthArray[i];
            }
            if(LengthWidthArray[i]<WIDTH&&LengthWidthArray[i]!=0){
                WIDTH=LengthWidthArray[i];
            }
        }

    }

    int getCurrentPosition(){
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE ),&csbi)){
            return -1;
        }
        currentX=csbi.dwCursorPosition.X;
        currentY=csbi.dwCursorPosition.Y;
    }


    void gotoxy (int x=0,int y=0){
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

public:
    Rectangles(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
        init();
        setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
    }

    void setCoordinates(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4){
        if(x1>20||x1<0){
            cout<<"\nx1 value is not in 1-20. Setting x1 to 1";
        }
        else{
            this->x1=x1;
        }
        if(y1>20||y1<0){
            cout<<"\ny1 value is not in 1-20. Setting y1 to 1";
        }
        else{
            this->y1=y1;
        }

        if(x2>20||x2<0){
            cout<<"\nx2 value is not in 1-20. Setting x2 to 1";
        }
        else{
            this->x2=x2;
        }
        if(y2>20||y2<0){
            cout<<"\ny2 value is not in 1-20. Setting y2 to 1";
        }
        else{
            this->y2=y2;
        }

        if(x3>20||x3<0){
            cout<<"\nx3 value is not in 1-20. Setting x3 to 1";
        }
        else{
            this->x3=x3;
        }
        if(y3>20||y3<0){
            cout<<"\ny3 value is not in 1-20. Setting y3 to 1";
        }
        else{
            this->y3=y3;
        }

        if(x4>20||x4<0){
            cout<<"\nx4 value is not in 1-20. Setting x4 to 1";
        }
        else{
            this->x4=x4;
        }
        if(y4>20||y4<0){
            cout<<"\ny4 value is not in 1-20. Setting y4 to 1";
        }
        else{
            this->y4=y4;
        }
        checkCoordinates();
        if(isRectangle()==0){
            cout<<"\nGiven coordinates does not form a Rectangle.";
        }
    }

    int isRectangle(){
        if(LengthWidthArray[0]==LengthWidthArray[1]&&LengthWidthArray[2]==LengthWidthArray[3]&&LENGTH!=0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isSquare(){
        if(isRectangle()){
            for(int i=0;i<2;i++){
                if(LengthWidthArray[i]!=LengthWidthArray[i+1]||LENGTH==0){
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
            return LENGTH;
        }
        else{
            return 0;
        }

    }
    float getWidth(){
       if(isRectangle()){
            return WIDTH;
        }
        else{
            return 0;
        }
    }
    float getPerimeter(){
       if(isRectangle()){
            return 2*(LENGTH+WIDTH);
       }
       else{
            return 0;
       }
    }
    float getArea(){
       if(isRectangle()){
            return LENGTH*WIDTH;
       }
       else{
            return 0;
       }
    }

    void setPerimeterCharacter(char PerimeterCharacter){
        this->PerimeterCharacter=PerimeterCharacter;
    }
    void setFillCharacter(char FillCharacter){
        this->FillCharacter=FillCharacter;
    }

    void scale(int ScaleValue){
        this->ScaleValue=ScaleValue;
    }
    void drawPosition(int x,int y){
        DrawX=x;DrawY=y;
    }
    void rotate(int RotateValue){
        ROTATE=RotateValue;
    }
    void draw(){
        if(!isRectangle()){
            return;
        }
        int tLENGTH,tWIDTH;
        if((ROTATE/90)%2==1){
            tLENGTH=WIDTH,tWIDTH=LENGTH;
        }
        else{
            tLENGTH=LENGTH,tWIDTH=WIDTH;
        }

        if(DrawX+tLENGTH*ScaleValue>23||DrawY+tWIDTH*ScaleValue>23){
            cout<<"ERROR!! Rectangle out of bounds.";
            return;
        }
        getCurrentPosition();
        int Xcoordinate=DrawX+3,Ycoordinate=currentY+(24-(DrawY+tWIDTH*ScaleValue));

        for(int i=0;i<25;i++){
            if(i==0){
                cout<<"**";
            }
            else if(i<24){
                cout<<setfill('0')<<setw(2)<<23-i;
            }
            else{
                cout<<"**";
            }
            for(int j=0;j<25;j++){
                if(i==0||i==24){
                    cout<<"_";
                }
                else if(j==0||j==24){
                    cout<<"|";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<"\n";
        }
        int x=Xcoordinate,y=Ycoordinate;
         for(int p=0;p<tWIDTH*ScaleValue;p++){
            for(int a=0;a<tLENGTH*ScaleValue;a++){
                if(p==0||p==tWIDTH*ScaleValue-1){
                    gotoxy(x,y);
                    cout<<PerimeterCharacter;
                }
                else if(a==0||a==tLENGTH*ScaleValue-1){
                    gotoxy(x,y);
                    cout<<PerimeterCharacter;
                }
                else{
                    gotoxy(x,y);
                    cout<<FillCharacter;
                }
                x++;
            }
                x=Xcoordinate;
                y++;
                gotoxy(x,y);

        }
        gotoxy(28,currentY+9);cout<<"Scaling: "<<ScaleValue<<"x";
        gotoxy(28,currentY+10);cout<<"Perimeter: "<<(2*ScaleValue*(LENGTH+WIDTH))<<"m";
        gotoxy(28,currentY+11);cout<<"Area: "<<(ScaleValue*LENGTH*WIDTH*ScaleValue)<<"m^2";
        gotoxy(28,currentY+12);cout<<"Rotation : "<<ROTATE<<"deg";
        x=27;
        y=currentY+24;
        gotoxy(x,y);
        cout<<"24";
        x=0;y++;
        gotoxy(x,y);

    }
};

int main(){

    cout<<"Creating Rectangle with coordinates (1,1),(1,5),(4,5),(4,1).";
    Rectangles Rect(1,1,1,5,4,5,4,1);

    cout<<"\nLENGTH: "<<Rect.getLength()<<"m\nWIDTH: "<<Rect.getWidth()<<"m";
    int s=Rect.isSquare();
    if(s){
        cout<<"\nThis Rectangle is a Square.";
    }
    else{
        cout<<"\nThis Rectangle is not a Square.";
    }
    cout<<"\nPerimeter: "<<Rect.getPerimeter()<<"m";
    cout<<"\nArea: "<<Rect.getArea()<<"m^2";
    cout<<"\n";
    Rect.setFillCharacter('-');
    Rect.setPerimeterCharacter('+');
    Rect.scale(2);
    Rect.drawPosition(1,1);
    Rect.rotate(90);
    cout<<"\n";
    Rect.draw();
    cout<"\n";

    return 0;
}
