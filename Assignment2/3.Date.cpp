#include<iostream>
#include<iomanip>
using namespace std;

class Date{
private:
    int day,month,year;

public:
    Date(int y,int m,int d){
        day=d;
        if(m<1||m>12){
            month=1;
        }
        else{
            month=m;
        }
        year=y;
    }
    void setDay(int d){
        day=d;
    }
    void setMonth(int m){
        month=m;
    }
    void setYear(int y){
        year=y;
    }

    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }

    void displayDate(){
        cout<<"Date: "<<year<<"/"<<setfill('0')<<setw(2)<<month<<"/"<<day;
    }
};

int main(){
    cout<<"Initializing date with 1999,7,2.\n";
    Date date(1999,7,2);
    cout<<"Day: "<<setfill('0')<<setw(2)<<date.getDay()<<", ";
    cout<<"Month: "<<setfill('0')<<setw(2)<<date.getMonth()<<", ";
    cout<<"Year: "<<date.getYear()<<"\n";
    cout<<"initial date: ";
    date.displayDate();
    cout<<"\n\nsetting new date value with 2020,8,8.\n";
    date.setYear(2020);
    date.setMonth(8);
    date.setDay(8);

    cout<<"Updated date: ";
    date.displayDate();
    cout<<"\n";
    return 0;
}
