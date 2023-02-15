/*
Question:WAP in c++ to print the following pattern for n lines, where n is taken as input from the user
    * 1
    * * 2
    * * * 3
    * * * * 4
*/
#include <iostream>

using namespace std;
int main(){
    int lines;
    cout<<"Enter the no of lines: ";
    cin>>lines;
    for(int i=0;i<lines;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<i+1<<endl;
    }
    return 0;
}