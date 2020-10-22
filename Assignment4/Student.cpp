#include<iostream>

using namespace std;

class Date{
public:
    int DAY,MONTH,YEAR;
    Date(int day=0,int month=0,int year=0){
        DAY=day;
        MONTH=day;
        YEAR=day;
    }
};

class Student{

protected:
    double MID_TERM_MARKS,END_TERM_MARKS;
    int YEAR,SEMESTER,AGE,ROLL;
    string NAME,TypeOfStudent;
    char SECTION;
    Date REGISTRATION_DATE,PASSING_DATE,DateOfBirth;

public:
    virtual void setName(string name){
        NAME=name;
    }
    virtual void setMidTermMarks(double midmarks){
        MID_TERM_MARKS=midmarks;
    }
    virtual void setEndTermMarks(double endmarks){
        END_TERM_MARKS=endmarks;
    }
    virtual void setAge(int age){
        AGE=age;
    }
    virtual void setRoll(int roll){
        ROLL=roll;
    }
    virtual void setSemester(int semester){
        SEMESTER=semester;
    }
    virtual void setTypeOfStudent(string type){
        TypeOfStudent=type;
    }
    virtual void setSection(char section){
        SECTION=section;
    }
    virtual void setRegistrationDate(int day,int month,int year){
        REGISTRATION_DATE.DAY=day;
        REGISTRATION_DATE.MONTH=month;
        REGISTRATION_DATE.YEAR=year;
    }
    virtual void setPassingDate(int day,int month,int year){
        PASSING_DATE.DAY=day;
        PASSING_DATE.MONTH=month;
        PASSING_DATE.YEAR=year;
    }
    virtual void setDateOfBirth(int day,int month,int year){
        DateOfBirth.DAY=day;
        DateOfBirth.MONTH=month;
        DateOfBirth.YEAR=year;
    }

    virtual string getName(){
        return NAME;
    }
    virtual int getMidTermMarks(){
        return MID_TERM_MARKS;
    }
    virtual int getEndTermMarks(){
        return END_TERM_MARKS;
    }

    virtual int getYear(){
        return YEAR;
    }
    virtual int getAge(){
        return AGE;
    }
    virtual int getRoll(){
        return ROLL;
    }
    virtual int getSemester(){
        return SEMESTER;
    }
    virtual string getTypeOfStudent(){
        return TypeOfStudent;
    }
    virtual char getSection(){
        return SECTION;
    }
    virtual Date getDateOfBirth(){
        return DateOfBirth;
    }
    virtual Date getRegistrationDate(){
        return REGISTRATION_DATE;
    }
    virtual Date getPassingDate(){
        return PASSING_DATE;
    }

};

class UndergraduateStudent:public Student{
protected:
    double HIGH_SCHOOL_MARKS;

    virtual void setHighSchoolMarks(double)=0;

    virtual int getHighSchoolMarks()=0;

};

class Freshman:public UndergraduateStudent{
public:
    Freshman(string name="",int age=0,int dob_D=0,int dob_M=0,int dob_Y=0,int dor_D=0,int dor_M=0,int dor_Y=0){
        YEAR=1;
        SEMESTER=1;
        NAME=name;
        setDateOfBirth(dob_D,dob_M,dob_Y);
        setRegistrationDate(dor_D,dor_M,dor_Y);
    }

    virtual void setHighSchoolMarks(double schoolmarks){
        HIGH_SCHOOL_MARKS=schoolmarks;
    }

    virtual int getHighSchoolMarks(){
        return HIGH_SCHOOL_MARKS;
    }

};

class Sophomore:public UndergraduateStudent{
public:
    Sophomore(string name="",int age=0,int dob_D=0,int dob_M=0,int dob_Y=0,int dor_D=0,int dor_M=0,int dor_Y=0){
        YEAR=2;
        SEMESTER=3;
        NAME=name;
        setDateOfBirth(dob_D,dob_M,dob_Y);
        setRegistrationDate(dor_D,dor_M,dor_Y);
    }

    virtual void setHighSchoolMarks(double schoolmarks){
        HIGH_SCHOOL_MARKS=schoolmarks;
    }

    virtual int getHighSchoolMarks(){
        return HIGH_SCHOOL_MARKS;
    }

};

class Junior:public UndergraduateStudent{
public:
    Junior(string name="",int age=0,int dob_D=0,int dob_M=0,int dob_Y=0,int dor_D=0,int dor_M=0,int dor_Y=0){
        YEAR=3;
        SEMESTER=5;
        NAME=name;
        setDateOfBirth(dob_D,dob_M,dob_Y);
        setRegistrationDate(dor_D,dor_M,dor_Y);
    }

    virtual void setHighSchoolMarks(double schoolmarks){
        HIGH_SCHOOL_MARKS=schoolmarks;
    }

    virtual int getHighSchoolMarks(){
        return HIGH_SCHOOL_MARKS;
    }

};

class Senior:public UndergraduateStudent{
public:
    Senior(string name="",int age=0,int dob_D=0,int dob_M=0,int dob_Y=0,int dor_D=0,int dor_M=0,int dor_Y=0){
        YEAR=4;
        SEMESTER=7;
        NAME=name;
        setDateOfBirth(dob_D,dob_M,dob_Y);
        setRegistrationDate(dor_D,dor_M,dor_Y);
    }

    virtual void setHighSchoolMarks(double schoolmarks){
        HIGH_SCHOOL_MARKS=schoolmarks;
    }

    virtual int getHighSchoolMarks(){
        return HIGH_SCHOOL_MARKS;
    }

};

class GraduateStudent:public Student{
protected:
    double UNDERGRADUATE_MARKS;

    virtual void setUndergraduateMarks(double)=0;

    virtual int getUndergraduateMarks()=0;

};

int main(){
    Date date;

    Freshman f("himanshu sajwan",19,2,7,2001,22,10,2020);
    date=f.getDateOfBirth();
    cout<<"Day: "<<date.DAY<<"\nMonth: "<<date.MONTH<<"\nYear: "<<date.YEAR;
    date=f.getRegistrationDate();
    cout<<"\nDay: "<<date.DAY<<"\nMonth: "<<date.MONTH<<"\nYear: "<<date.YEAR;
    cout<<"\nYear: "<<f.getYear()<<"\nSemester: "<<f.getSemester();


    return 0;
}
