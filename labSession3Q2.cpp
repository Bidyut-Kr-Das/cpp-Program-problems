/*Question:
    Create a vector you studied in physics as a class with two integer data fields u and v.
    (a) Create one object of this vector  and multiply it with a scaler quantity.
    (b) Create two objects of this vector, add them and store result in a third vector object.
*/
#include<iostream>
using namespace std;
class Vector{
    private:
                int u;
                int v;
    public:
                void multiplication(int scalerNum);                          //method for multiplying with scalar
                void setValue();                                                                //method overloaded 
                void setValue(int u1,int v1);                                          //method overloaded 
                void display();                                                                   //display function
                friend Vector addition(Vector v1, Vector v2);          // friend function to add 2 vector

};
void Vector::multiplication(int scalerNum){ //multiplication method
    u=u*scalerNum;
    v=v*scalerNum;
}
void Vector :: setValue(){          //overloaded setvalue method without parameters 
    cout<<"Enter value of u: ";
    cin>>u;
    cout<<"Enter value of v: ";
    cin>>v;
}
void Vector :: setValue(int u1,int v1){    //overloaded setValue method with 2 parameters 
    u=u1;
    v=v1;
}

void Vector :: display(){                               //display function
    cout<<"the value of vector is: ("<<u<<"u) + ("<<v<<"v)"<<endl;
}
Vector addition(Vector v1,Vector v2){
    Vector v3;
    v3.setValue((v1.u+v2.u),(v1.v+v2.v));
    return v3;
}
int main(){
    Vector v1,v2,v3;
    cout<<"Enter values for object 1 of vector class---"<<endl;
    v1.setValue();
    int scaler;
    cout<<"Enter number to multiply: ";
    cin>>scaler;
    v1.multiplication(scaler);
    cout<<"After multiplying with "<<scaler<<endl;
    v1.display();
    cout<<"Adding 2 vectors--"<<endl;
    cout<<"Enter values for vector 1--"<<endl;
    v1.setValue();
    cout<<"Enter values for vector 2--"<<endl;
    v2.setValue();
    v3=addition(v1,v2);
    v1.display();
    v2.display();
    v3.display();

    return 0;
}