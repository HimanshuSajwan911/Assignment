#include <iostream>
using namespace std;

int main() {
    int n;
    int isPrime=1;

    cout<<"Enter a positive integer: ";
    cin>>n;

    for (int i=2;i<= n/2;i++) {
        if (n%i==0) {
            isPrime=0;
            break;
        }
    }
    if(isPrime)
        cout<<n<<" is a prime number.\n";
    else
        cout<<n<<" is not a prime number.\n";

    return 0;
}
