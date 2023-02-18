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
    float feet;
    float inches;
};
struct Room{
    Distance length;
    Distance width;
};
float calcArea(Room room){
    float length1=room.length.feet+(room.length.inches/12);
    float width1=room.width.feet+(room.width.inches/12);
    return length1*width1;

}

int main(){
    Room dining_room;
    cout<<"Enter length (feet part): ";
    cin>>dining_room.length.feet;
    cout<<"Enter length (inch part): ";
    cin>>dining_room.length.inches;
    cout<<"Enter width (feet part): ";
    cin>>dining_room.width.feet;
    cout<<"Enter width (inch part): ";
    cin>>dining_room.width.inches;
    float result=calcArea(dining_room);
    cout<<"The total area is: "<<result<<" sqft";
    return 0;
}