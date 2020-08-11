#include<iostream>
using namespace std;

class Account{
private:
    int balance;

public:
    Account(int balance){
        if(balance<0){
            cout<<"initial balance was invalid!!\nsetting initial balance to 0.";
            this->balance=0;
        }
        else{
            this->balance=balance;
        }
    }
    void Credit(int credit){
        balance+=credit;
    }
    void Debit(int debit){
        if(debit>balance){
            cout<<"Debit amount exceeded account balance.";
        }
        else{
            balance-=debit;
        }
    }
    int getBalance(){
        return balance;
    }
};

int main(){
    cout<<"Initializing Account A with 12000\n";
    Account A(12000);
    cout<<"Crediting Account A with 5000\n";
    A.Credit(5000);
    cout<<"Debiting Account A with 60000\n";
    A.Debit(60000);
    cout<<"\nAccount Balance of A: "<<A.getBalance()<<"\n";

    cout<<"\nInitializing Account B with -12000\n";
    Account B(-12000);
    cout<<"\nCrediting Account B with 50000\n";
    B.Credit(50000);
    cout<<"Debiting Account B with 6000\n";
    B.Debit(6000);
    cout<<"Account Balance of B: "<<B.getBalance()<<"\n";

    return 0;
}
