/*
Question:
3. Write a function called reversit() that reverses a C-string (an array of char).
Use a for loop that swaps the first and last characters, then the second and
next-to-last characters, and so on. The string should be passed to reversit() as an argument.
Write a program to exercise reversit(). The program should get a string from the user,
call reversit(), and print out the result. Use an input method that allows embedded blanks.
*/
#include <iostream>
#include <string.h>
using namespace std;
void reverseIt(char *arr, int size) // reverse a string or more specifically character array
{
    int middle = size / 2;
    for (int i = 0; i < middle; i++)
    {
        char temp;
        temp = arr[i];
        arr[i] = arr[size - 1];
        arr[size - 1] = temp;
        size--;
    }
}

int main()
{
    int maxSize = 30; // you can assume any number depending on your string
    char arr[maxSize];
    cin.get(arr, maxSize);
    int size = strlen(arr);
    reverseIt(arr, size);
    cout << arr;
    return 0;
}