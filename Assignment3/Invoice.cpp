#include"Invoice.h"

    Invoice::Invoice(std::string partnumber,std::string partdescription,int quantity,int price){
        PartNumber=partnumber;
        PartDescription=partdescription;
        if(quantity<0){
            QUANTITY=0;
        }
        else{
            QUANTITY=quantity;
        }
        if(price<0){
            PRICE=0;
        }
        else{
            PRICE=price;
        }
    }

    void Invoice::setPartNumber(std::string partnumber){
        PartNumber=partnumber;
    }
    void Invoice::setPartDescription(std::string partdesctiption){
        PartDescription=partdesctiption;
    }
    void Invoice::setQuantity(int quantity){
        if(quantity<0){
            QUANTITY=0;
        }
        else{
            QUANTITY=quantity;
        }
    }
    void Invoice::setPrice(int price){
        if(price<0){
            PRICE=0;
        }
        else{
            PRICE=price;
        }
    }
    std::string Invoice::getPartNumber(){
        return PartNumber;
    }
    std::string Invoice::getPartDescription(){
        return PartDescription;
    }
    int Invoice::getQuantity(){
        return QUANTITY;
    }
    int Invoice::getPrice(){
        return PRICE;
    }
    int Invoice::getInvoiceAmount(){
        return QUANTITY*PRICE;
    }
