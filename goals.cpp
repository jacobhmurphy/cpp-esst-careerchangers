#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int gamesPlayed;
    int totalGoals = 0;
    cout << "How many games were played? ";
    cin >> gamesPlayed;
    for (size_t i = 1; i <= gamesPlayed; i++)
    {
        int singleGameGoals = 0;
        cout << "How many goals were scored in game " << i << "? ";
        cin >> singleGameGoals;
        totalGoals += singleGameGoals;
    }
    cout << "There were " << totalGoals << " goals scored this season" << endl;
    return 0;
}
