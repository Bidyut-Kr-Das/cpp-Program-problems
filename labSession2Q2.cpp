/*Question: Implement a structure for distance
struct Distance{
    int feet;
    int inches;
};
Take two objects of Distance as length and width of a room. Find the area of the room in sq feet*/
#include<iostream>
using namespace std;
struct Distance{
    float feet;
    float inches;
};
float calcArea(Distance length,Distance width){
    float length1=length.feet+(length.inches/12);
    float width1=width.feet+(width.inches/12);
    return length1*width1;
}

int main(){
    Distance length,width;
    cout<<"Enter length (feet part): ";
    cin>>length.feet;
    cout<<"Enter length (inch part): ";
    cin>>length.inches;
    cout<<"Enter width (feet part): ";
    cin>>width.feet;
    cout<<"Enter width (inch part): ";
    cin>>width.inches;
    float result=calcArea(length,width);
    cout<<"The total area is: "<<result<<" sqft";
    return 0;
}