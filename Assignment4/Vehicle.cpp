#include<iostream>
using namespace std;

class Vehicle{
protected:
    int TYRES,GEARS,CC,CURRENT_GEAR;
    float SPEED,FUEL,MILEAGE;
    string BREAK_TYPE,NAME,VEHICLE_TYPE,VEHICLE_MODEL;
    bool START;
    Vehicle(){
        START=false;
        TYRES=0;
        GEARS=0;
        CURRENT_GEAR=0;
        CC=0;
        SPEED=0.0;
        FUEL=0.0;
        MILEAGE=0.0;
        BREAK_TYPE="";
        NAME="";
        VEHICLE_TYPE="";
        VEHICLE_MODEL="";
    }
public:

    virtual int start(){
        if(!START){
            START=true;
            return 1;
        }
        else{
            return 0;
        }
    }
    virtual int stop(){
        if(START){
            START=false;
            return 1;
        }
        else{
            return 0;
        }
    }
    virtual int increaseGear(){
        if(START){
            if(CURRENT_GEAR<GEARS){
                CURRENT_GEAR++;
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return -1;
        }
    }
    virtual int decreaseGear(){
        if(START){
            if(CURRENT_GEAR>1){
                CURRENT_GEAR--;
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return -1;
        }
    }

    virtual float getFuel(){
        return FUEL;
    }
    virtual float getSpeed(){
        return SPEED;
    }
    virtual float getMileage(){
        return MILEAGE;
    }
    virtual int getTyreCount(){
        return TYRES;
    }
    virtual int getGearCount(){
        return GEARS;
    }
    virtual int getCubicCentimeter(){
        return CC;
    }
    virtual int getCurrentGear(){
        return CURRENT_GEAR;
    }
    virtual string getName(){
        return NAME;
    }
    virtual string getBreakType(){
        return BREAK_TYPE;
    }
    virtual string getVehicleType(){
        return VEHICLE_TYPE;
    }
    virtual string getVehicleModel(){
        return VEHICLE_MODEL;
    }

};

class Car:public Vehicle{
protected:
    int WINDOWS,DOORS;

     Car(){
        TYRES=4;
        WINDOWS=4;
        DOORS=4;
        GEARS=5;
        CURRENT_GEAR=1;
    }
    virtual int reverseGear()=0;

    virtual int getWindowCount()=0;
    virtual int getDoorCount()=0;

};

class HondaCity:public Car{
public:
    HondaCity(){
        NAME="Honda City";
        VEHICLE_TYPE="Family Car";
        VEHICLE_MODEL="H15C120";
    }

    virtual int reverseGear(){
        if(CURRENT_GEAR==1){
            return 1;
        }
        else{
            return 0;
        }
    }
    virtual int getWindowCount(){
        return WINDOWS;
    }
    virtual int getDoorCount(){
        return DOORS;
    }
};

class Bike:public Vehicle{
protected:
    Bike(){
        TYRES=2;
        GEARS=6;
    }

};



int main(){

    HondaCity HondaCity;
    cout<<"Name: "<<HondaCity.getName();
    cout<<"\nModel: "<<HondaCity.getVehicleModel();
    cout<<"\nVehicle Type: "<<HondaCity.getVehicleType();
    cout<<"\nTotal Gears: "<<HondaCity.getGearCount();
    cout<<"\n\nStarting car...";
    if(HondaCity.start()){
        cout<<"\nCar started.";
    }
    else{
        cout<<"\nCould not start the car.";
    }
    cout<<"\nCurrent gear: "<<HondaCity.getCurrentGear();
    if(HondaCity.increaseGear()){
        cout<<"\nIncreasing gear...";
        cout<<"\nCurrent gear: "<<HondaCity.getCurrentGear();
    }
    else{
        cout<<"Last gear reached...";
    }


    cout<<"\n";

    return 0;
}
