#include<iostream>
using namespace std;

class Invoice{
private:
    string  PartNumber,PartDescription ;
    int QUANTITY,PRICE;

public:
    Invoice(string partnumber,string partdescription,int quantity,int price){
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
    void setPartNumber(string partnumber){
        PartNumber=partnumber;
    }
    void setPartDescription(string partdesctiption){
        PartDescription=partdesctiption;
    }
    void setQuantity(int quantity){
        if(quantity<0){
            QUANTITY=0;
        }
        else{
            QUANTITY=quantity;
        }
    }
    void setPrice(int price){
        if(price<0){
            PRICE=0;
        }
        else{
            PRICE=price;
        }
    }
    string getPartNumber(){
        return PartNumber;
    }
    string getPartDescription(){
        return PartDescription;
    }
    int getQuantity(){
        return QUANTITY;
    }
    int getPrice(){
        return PRICE;
    }
    int getInvoiceAmount(){
        return QUANTITY*PRICE;
    }

};

int main(){

    cout<<"Creating Invoice object with values: (1022,Ball Point Hammer,200,130)";
    Invoice iv("1022","Ball Point Hammer",200,130);
    cout<<"\nPart Number: "<<iv.getPartNumber();
    cout<<"\nPart Description: "<<iv.getPartDescription();
    cout<<"\nQuantity: "<<iv.getQuantity();
    cout<<"\nPrice Per Item: "<<iv.getPrice();
    cout<<"\nInvoice Amount: "<<iv.getInvoiceAmount();

    cout<<"\n\nSetting new values as: (1024,Screw Driver,182,145)";
    iv.setPartNumber("1024");
    iv.setPartDescription("Screw Driver");
    iv.setQuantity(182);
    iv.setPrice(145);
    cout<<"\nPart Number: "<<iv.getPartNumber();
    cout<<"\nPart Description: "<<iv.getPartDescription();
    cout<<"\nQuantity: "<<iv.getQuantity();
    cout<<"\nPrice Per Item: "<<iv.getPrice();
    cout<<"\nInvoice Amount: "<<iv.getInvoiceAmount();

    cout<<"\n";

    return 0;
}
