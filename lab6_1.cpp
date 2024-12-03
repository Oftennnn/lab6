#include<iostream>
using namespace std;

int main(){
    int num=0,i=0,even=0,odd=0;
    while(i<1){
    cout << "Enter an integer: ";
    cin >> num;
        if(num==0){i++;}
        else{if(num%2==0){even++;}else{odd++;}
        }
    
    }
    cout << "#Even numbers = " << even ;
    cout << "\n#Odd numbers = " << odd ;
    return 0;
}