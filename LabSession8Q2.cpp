/*
Question:
2. Write a C++ program using array of objects that store player name, matches played and runs scored for given number
of players. Involve member func- tions to obtain player with maximum matches played, maximum runs scored and maximum average.
*/
#include <iostream>
#include <ios>
#include <limits>
using namespace std;
class Player
{
public:
    string name;
    unsigned int match;
    unsigned int run;
    double averageRun;
    void setData()
    {
        cout << "Enter name of the player: ";
        getline(cin, name);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter matches played: ";
        cin >> match;
        cout << "Enter runs: ";
        cin >> run;
        averageRun = run / match;
    }
    void display()
    {
        cout << "Name of the player is: " << name << endl;
        cout << "Total run scored by the player: " << run << endl;
        cout << "Total mathces played by the player: " << match << endl;
        cout << "Average run of that player: " << averageRun << endl;
    }
    friend Player findMaxMatch(Player[], int);  // finds the player with maximum mathces played
    friend Player findMaxRun(Player[], int);    // finds the player with maximum runs scored.
    friend Player findMaxAvgRun(Player[], int); // finds the player with maximum average.
};
Player findMaxRun(Player a[], int size)
{
    Player winner;
    int max = a[0].run;
    for (int i = 1; i < size; i++)
    {
        if (a[i].run > max)
        {
            max = a[i].run;
            winner = a[i];
        }
    }
    return winner;
}
Player findMaxMatch(Player a[], int size)
{
    Player winner;
    int max = a[0].match;
    for (int i = 1; i < size; i++)
    {
        if (a[i].match > max)
        {
            max = a[i].match;
            winner = a[i];
        }
    }
    return winner;
}
Player findMaxAvgRun(Player a[], int size)
{
    Player winner;
    double max = a[0].averageRun;
    for (int i = 1; i < size; i++)
    {
        if (a[i].averageRun > max)
        {
            max = a[i].averageRun;
            winner = a[i];
        }
    }
    return winner;
}
int main()
{
    int size;
    cout << "Enter the number of players: ";
    cin >> size;
    Player team[size];
    Player winnerRun;
    Player winnerMatch;
    Player winnerAverage;
    for (int i = 0; i < size; i++)
    {
        team[i].setData();
    }
    winnerMatch = findMaxMatch(team, size);
    cout << "This player has played the most matches-------------------------->" << endl;
    winnerMatch.display();
    winnerRun = findMaxRun(team, size);
    cout << "This player has scored the most run-------------------------->" << endl;
    winnerRun.display();
    winnerAverage = findMaxAvgRun(team, size);
    cout << "This player has the maximum average-------------------------->" << endl;
    winnerAverage.display();
    return 0;
}