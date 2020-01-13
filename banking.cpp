#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string accountType;
    cout << "Checking or savings account? ";
    cin >> accountType;
    if (accountType == "checking")
    {
        double balance;
        double deposits;
        double withdrawals;
        cout << "What was your initial balance? ";
        cin >> balance;
        cout << "How much did you deposit? ";
        cin >> deposits;
        cout << "How much did you withdraw? ";
        cin >> withdrawals;
        balance += deposits - withdrawals;
        cout << "Your final checking balance is $" << balance << endl;
    }
    else if (accountType == "savings")
    {
        double balance;
        double deposits;
        double withdrawals;
        cout << "What was your initial balance? ";
        cin >> balance;
        cout << "How much did you deposit? ";
        cin >> deposits;
        cout << "How much did you withdraw? ";
        cin >> withdrawals;
        balance += deposits - withdrawals;
        cout << "Your final savings balance is $" << balance << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
        return 1;
    }
    return 0;
}
