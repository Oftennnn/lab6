#include<iostream>
using namespace std;

int main(){
    int E = 0 , O = 0 , i = 1;
    int num;
    while(i > 0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0){
            i -= 1;
        }
        else{
            if(num % 2 == 0){
                E += 1;
            }
            else{
                O += 1;
            }
        }
     
    }    
    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O;
    return 0;
}