#include <iostream>
using namespace std;

int main(){
    int n,num,digit,rev=0;

    cout<<"Enter a positive number: ";
    cin>>num;
    n=num;

    do
    {
        digit = num % 10;
        rev = (rev*10)+digit;
        num = num/10;
    } while (num!=0);

    if(n==rev){
        cout<<n<<" is a palindrome number.";
    }
    else{
        cout<<n<<" is not a palindrome number.";
    }
    return 0;
}
