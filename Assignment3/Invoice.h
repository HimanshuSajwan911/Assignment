#include<string>

class Invoice{
private:
    std::string  PartNumber,PartDescription;
    int QUANTITY,PRICE;

public:
    Invoice(std::string,std::string,int,int);
    void setPartNumber(std::string);
    void setPartDescription(std::string);
    void setQuantity(int);
    void setPrice(int);

    std::string getPartNumber();
    std::string getPartDescription();
    int getQuantity();
    int getPrice();
    int getInvoiceAmount();

};

