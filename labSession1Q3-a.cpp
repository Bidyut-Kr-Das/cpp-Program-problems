/*Question:WAP in c++ to using functions to check if a number is divisible by 5 and 7*/
#include<iostream>
using namespace std;
void isDivisable(int);  //using function prototype method
int main(){
    int number;
    cout<<"Enter a number in integer: ";
    cin>>number;
    isDivisable(number);

    return 0;
}
void isDivisable(int number){//function to check if the given number is divisable by 5 and 7 
    bool divisable5=number%5==0;
    bool divisable7=number%7==0;
    if(divisable5&&divisable7){
        cout<<"The number "<<number<<" is divisable by both 5 and 7.";
    }
    else if(!divisable5&&divisable7){
        cout<<"The number "<<number<<" is divisable by 7 not 5.";
    }
    else if(divisable5&&!divisable7){
        cout<<"The number "<<number<<" is divisable by 5 not 7.";
    }
    else{
        cout<<"The number "<<number<<" is not divisible by both 5 or 7.";
    }
}