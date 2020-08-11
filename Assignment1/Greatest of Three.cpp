#include<iostream>

int main(){

    int a=0, b=0, c=0;
    int largest=0;
    std::cout<<"Input three numbers: ";
    std::cin>>a>>b>>c;

    if(a>b&&a>c){
        largest=a;
    }
    else if(b>a&&b>c){
        largest=b;
    }
    else {
        largest=c;
    }

    std::cout<<"\nLargest number among: "<<a<<","<<b<<","<<c<<" is: "<<largest<<"\n";

    return 0;
}
