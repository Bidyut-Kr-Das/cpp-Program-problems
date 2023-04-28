/*
Question:
1.
    (a)Create a class `Student` with public data member `name` and private
        data members `id` and `marks`.
    (b)Write public set and get methods for private data members.
    (c) Create an object with your name , id and marks.
2.
    (a)In the above program, set id to `201001001000` and marks to `0`.
    (b)Take the last 2 digits from user and construct the full id. Take the
        name and marks as input. Display name, full id and marks of 2 students.
*/
#include <iostream>
#include <string>
#include <ios>
#include <limits>

using namespace std;

class Student
{
    long long int id; // for my computer the long int is not enough to store 12 digit integer so taken
                      // long long integer.
    int marks;

public:
    string name;
    Student()
    { // Constructor to initialize the values of private member attributes
        id = 201001001000;
        marks = 0;
    }
    void setData()
    { // Sets data of Student.
        long int idGiven;
        cout << "Enter id: ";
        cin >> idGiven;
        id = id + idGiven;
        cout << "Enter marks: ";
        cin >> marks;
        // cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    void displayData()
    { // Displays data of student.
        cout << "name:  " << name << endl;
        cout << "id: " << id << endl;
        cout << "marks: " << marks << endl;
    }
    friend void setName(Student *s)
    { // Friend function to set names of students taken pointer parameter
        cout << "Enter name of the student: ";
        // cin >> s->name;
        // cin.clear();
        getline(cin, s->name);
    }
};
int main()
{
    Student s1, s2;
    setName(&s1);
    s1.setData();
    // cout << "Enter second data" << endl;
    setName(&s2);
    s2.setData();
    s1.displayData();
    s2.displayData();
    return 0;
}