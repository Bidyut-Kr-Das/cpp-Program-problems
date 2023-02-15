/*Question: Implement a structure for distance
struct Distance{
    int feet;
    int inches;
};
Take two objects of Distance as length and width of a room. Find the area of the room in sq feet*/
#include<iostream>
using namespace std;
typedef struct distance{
    int feet;
    int inches;
}dist;
int calcAreaFeet(dist length, dist width){return length.feet*width.feet;}
int calcAreaInch(dist length,dist width){
    length.feet=12*length.inches;
    width.feet=12*width.inches;
    return calcAreaFeet(length,width);
}
int main(){
    dist length,width;
    int unit;
    cout<<"Enter 1 to enter values in feet"<<endl<<"Enter 2 to enter values in inches"<<endl<<"Enter your value: ";
    cin>>unit;
    if(unit==1){
        cout<<"Enter length in feet: ";
        cin>>length.feet;
        cout<<"Enter width in feet: ";
        cin>>width.feet;
        int result=calcAreaFeet(length,width);
        cout<<"The area of the room is: "<<result<<"sqft";
    }
    else{
        cout<<"Enter length in inch: ";
        cin>>length.inches;
        cout<<"Enter width in inch: ";
        cin>>width.inches;
        int result=calcAreaInch(length,width);
        cout<<"The area of the room is: "<<result<<"sqft";

    }
    return 0;
}