#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char str[100];
    int length;
    int flag=1;

    cout<<"Enter a string: ";
    cin>>str;

    length=strlen(str);

    for(int i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            flag=0;
            break;
   }
}

    if(flag){
        cout << str << " is a palindrome.\n";
    }
    else{
        cout << str << " is not a palindrome.\n";
    }

    return 0;
}
