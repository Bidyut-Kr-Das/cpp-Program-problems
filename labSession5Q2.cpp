/*
Question:
    Consider a class Time as follows
    class Time{
        int hr;
        int min;
        int sec;
    } ;
    Create two objects of this class and take input from the user.
    Overload the + operator to add two times. Write a program to test this class.
*/

#include <iostream>
using namespace std;
class Time
{
    int hr;
    int min;
    int sec;

public:
    void setTime();         // setter function to set hour, minute and seconds
    void display(void);     // getter function to print the time
    Time operator+(Time &); // overloaded operator + to add 2 Time objects
};
void Time ::setTime()
{
    cout << "Enter hour: ";
    cin >> hr;
    cout << "Enter minute: ";
    cin >> min;
    cout << "Enter second: ";
    cin >> sec;
}
void Time ::display()
{
    cout << "The hour is: " << hr << endl;
    cout << "The minute is: " << min << endl;
    cout << "The second is: " << sec << endl;
}
Time Time ::operator+(Time &a)
{
    Time temp;
    temp.hr = hr + a.hr;
    temp.min = min + a.min;
    temp.sec = sec + a.sec;
    return temp;
}
int main()
{
    Time t1, t2, t3;
    t1.setTime();
    t2.setTime();
    t3 = t1 + t2;

    t3.display();
    return 0;
}