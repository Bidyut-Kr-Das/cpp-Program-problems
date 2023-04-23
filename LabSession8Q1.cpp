/*
1. An election is contested by 5 candidates. The candidates are numbered 1 to 5
and the voting is done by marking the candidate number in the ballot paper.
Create a class Ballot Box to read the ballots and count the votes cast for each
candidate using an array variable count.
In case a number read is outside the range 1 to 5 the ballot should be
considered as spoilt ballot and the program should also count the number of spoilt ballots.
*/
#include <iostream>
using namespace std;
class BallotBox
{
    int arr[10];
    int c1, c2, c3, c4, c5;
    int spoiltBallot;

public:
    BallotBox()
    {
        c1 = 0;
        c2 = 0;
        c3 = 0;
        c4 = 0;
        c5 = 0;
        spoiltBallot = 0;
    }
    void getVote(void)
    {
        for (int i = 0; i < 10; i++)
        {
            int vote;
            cout << "Choose a candidate(between 1 to 5): ";
            cin >> vote;
            arr[i] = vote;
        }
    }
    void displayVote(void)
    {
        for (int i = 0; i < 10; i++)
        {
            // switch (arr[i])
            // {
            // case 1:
            //     c1++;
            // case 2:
            //     c2++;
            // case 3:
            //     c3++;
            // case 4:
            //     c4++;
            // case 5:
            //     c5++;
            // default:
            //     spoiltBallot++;
            // }
            if (arr[i] == 1)
            {
                c1++;
            }
            else if (arr[i] == 2)
            {
                c2++;
            }
            else if (arr[i] == 3)
            {
                c3++;
            }
            else if (arr[i] == 4)
            {
                c4++;
            }
            else if (arr[i] == 5)
            {
                c5++;
            }
            else
            {
                spoiltBallot++;
            }
        }
        cout << "candidate 1 got " << c1 << " votes" << endl;
        cout << "candidate 2 got " << c2 << " votes" << endl;
        cout << "candidate 3 got " << c3 << " votes" << endl;
        cout << "candidate 4 got " << c4 << " votes" << endl;
        cout << "candidate 5 got " << c5 << " votes" << endl;
        cout << "votes went to spoilt ballot is:  " << spoiltBallot << endl;
    }
};

int main()
{
    BallotBox b1;
    b1.getVote();
    b1.displayVote();

    return 0;
}