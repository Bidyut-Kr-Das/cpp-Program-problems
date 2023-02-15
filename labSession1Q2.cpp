//Question: WAP in c++ to find the odd factors of a number.
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number in integer: ";
    cin>>number;
    cout<<"The odd factors of the number "<<number<<" are: ";
    for(int i=1;i<=number;i++){
        if(number%i==0){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}