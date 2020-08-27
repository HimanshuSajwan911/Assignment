#include<iostream>
#include"Invoice.h"
using namespace std;
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
