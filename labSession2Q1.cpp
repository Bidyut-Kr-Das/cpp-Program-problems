/*Question: Implement  a structure of time 
struct time{
    int hr;
    int min;
    int sec;
};
Take input from user.Convert into seconds and print*/
#include<iostream>
using namespace std;
struct Time{
    int hr;
    int min;
    int sec;
};
int main(){
    struct Time time;
    cout<<"Enter the hour: ";
    cin>>time.hr;
    cout<<"Enter the minute: ";
    cin>>time.min;
    cout<<"Enter the seconds: ";
    cin>>time.sec;
    cout<<"the hour in seconds is: "<<(time.hr)*3600<<endl;
    cout<<"the minute in seconds is: "<<(time.hr)*60<<endl;
    cout<<"the second is: "<<time.sec<<endl;
    return 0;
}