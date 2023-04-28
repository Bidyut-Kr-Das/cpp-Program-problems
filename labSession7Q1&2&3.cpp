/*
1. Create a base class `employee` with
i. public data members name and id.
From this class derive two other classes using public derivation:
(a) `manager` class with
i. private data member salary
ii. public data member designation (eg., president, vice-president, etc.)
(b) `scientist` class with
i. private data member salary
ii. public data member num_of_publications
Create one object of manager and one object of scientist. Take input from user for all four data fields for each object. Display.
2. In the above program use private derivation. What are the public methods that you need to add?
3. In the same program, now make the id protected. Add necessary methods to access id in private derivation of the manager and scientist classes.

*/

#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class Employee
{
    string name;
    long int id;

public:
    void setData(void)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter id: ";
        cin >> id;
    }
    void getData(void)
    {
        cout << "The name is: " << name << endl;
        cout << "The id is: " << id << endl;
    }
};
class Manager : public Employee
{
    double salary;

public:
    string designation;
    void setManagerData(void)
    {
        setData();
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter designation: ";
        cin >> designation;
    }
    void display(void)
    {
        getData();
        cout << "The salary is: " << salary << endl;
        cout << "The designation is: " << designation << endl;
    }
};
class Scientist : public Employee
{
    double salary;

public:
    int num_of_publications;
    void setScientistData(void)
    {
        setData();
        cout << "Enter the salary: ";
        cin >> salary;
        cout << "Enter the number of publication: ";
        cin >> num_of_publications;
    }
    void display(void)
    {
        getData();
        cout << "The salary is: " << salary << endl;
        cout << "The number of publication is: " << num_of_publications << endl;
    }
};

int main()
{
    Manager m1;
    Scientist s1;
    m1.setManagerData();
    m1.display();
    s1.setScientistData();
    s1.display();
    return 0;
}