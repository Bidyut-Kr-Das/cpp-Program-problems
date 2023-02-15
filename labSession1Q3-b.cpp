/*Question: WAP in c++ to check if the product of digits is equal to the sum of digits of a number*/
#include<iostream>
using namespace std;
void isEqual(int number){
    int sum=0,product=1,realnumber=number;
    while(realnumber!=0){
        sum=sum+(realnumber%10);
        realnumber=realnumber/10;
    }
    realnumber=number;
    while(realnumber!=0){
        product=product*(realnumber%10);
        realnumber =realnumber/10;
    }
    if(sum==product){
        cout<<"the sum of digits of  number "<<number<<" is: "<<sum<<endl;
        cout<<"the product of digits of  number "<<number<<" is: "<<product<<endl;
        cout<<"both are equal."<<endl;
    }
    else{
        cout<<"the sum of digits of  number "<<number<<" is: "<<sum<<endl;
        cout<<"the product of digits of  number "<<number<<" is: "<<product<<endl;
        cout<<"They are not equal."<<endl;
    }

}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    isEqual(number);
    return 0;
}