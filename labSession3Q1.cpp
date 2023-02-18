/*Question:
    Create a class `ticketcounter`. the two data items are a type unsigned int to hold the total number of 
    passengers, and a type double to hold the total amount of money collected. A constructor initializes both 
    of these to 0. A member funciton callend `payingPassenger()` increments the passenger total and adds 
    Rs. 50 to the cash total. Another function called `childPassenger()`, increments the passenger total, 
    but does not add anything to the cash total. Finally, a member function called `display()` displays the 
    two totals.

    Include a program to test this class. The program should allow a ticket-collector to press one key to count a 
    paying passenger. another key to count a child passenger. By pushing a third key the collector can print the 
    total number of passengers , total amount of cash collected  and then exit.
*/
#include<iostream>
using namespace std;
class TicketCounter{         //defining class ticket counter
    private:
                unsigned int totalPassenger;
                double totalMoney;
                unsigned int adult;
                unsigned int child;
    public:
                TicketCounter(){
                    totalPassenger=0;
                    totalMoney=0;
                    adult=0;
                    child=0;
                }
                void payingPassenger();       //defining adult passenger adding function.
                void childPassenger();          //defining child passenger adding function.
                void display();                         //defining display funciton.
};
void TicketCounter :: payingPassenger(){ //adult passenger adding funciton
    totalMoney=totalMoney+50;
    totalPassenger++;
    adult++;
    cout<<"1 adult passenger added."<<endl;
}
void TicketCounter :: childPassenger(){  //child passenger adding funciton
    totalPassenger++;
    child++;
    cout<<"1 child passenger added"<<endl;
}
void TicketCounter :: display(){               //display function
    cout<<"The total no of passenger till now: "<<totalPassenger<<" ("<<adult<<" adult + "<<child<<" child)"<<endl;
    cout<<"The total amount of money till now: "<<totalMoney<<endl;
} 
int main(){
    TicketCounter t1;
    while(true){
        char choice;
        cout<<"Enter 'a' to entry adult passenger."<<endl;
        cout<<"Enter 'c' to entry child passenger."<<endl;
        cout<<"Enter 'd' to display total passenger and money."<<endl;
        cin>>choice;
        if(choice=='a'){
            t1.payingPassenger();
        }
        else if(choice=='c'){
            t1.childPassenger();
        }
        else if(choice=='d'){
            t1.display();
            break;
        }
        else{
            cout<<"choose between 'a' ,'c' and 'd' "<<endl;
        }
    }
    return 0;
}