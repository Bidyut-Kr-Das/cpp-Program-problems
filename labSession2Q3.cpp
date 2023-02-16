/*Question: Consider the following structure for Distance and Room
struct Distance{
    int feet;
    int inches;
};
struct Room{
    Distance length;
    Distance width;
}
(a)Create an object of struct Room as dining_room.
(b)Take the dimension of the room as input from the user.
(c)Print the area of the room as square feet.
*/
#include<iostream>
using namespace std;
struct Distance{
    int feet;
    int inches;
};
struct Room{
    Distance length;
    Distance width;
};
int calcAreaFeet(Room room){
    return room.length.feet*room.width.feet;
}
int calcAreaInch(Room room){
    room.length.feet=room.length.inches*12;
    room.width.feet=room.width.inches*12;
    return calcAreaFeet(room);

}

int main(){
    Room dining_room;
    int unit;
    cout<<"Enter 1 to enter values in feet"<<endl<<"Enter 2 to enter values in inches"<<endl<<"Enter your value: ";
    cin>>unit;
    if(unit==1){
        cout<<"Enter length in feet: ";
        cin>>dining_room.length.feet;
        cout<<"Enter width in feet: ";
        cin>>dining_room.width.feet;
        int result=calcAreaFeet(dining_room);
        cout<<"The area of the room is: "<<result<<"sqft";
    }
    else{
        cout<<"Enter length in inch: ";
        cin>>dining_room.length.inches;
        cout<<"Enter width in inch: ";
        cin>>dining_room.width.inches;
        int result=calcAreaInch(dining_room);
        cout<<"The area of the room is: "<<result<<"sqft";

    }
    return 0;
}