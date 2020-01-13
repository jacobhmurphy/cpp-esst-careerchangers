#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double balance, monthlyPayment;
    int months = 0;
    cout << "Enter initial loan balance: ";
    cin >> balance;
    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;
    while (balance > 0)
    {
        balance -= monthlyPayment;
        months++;
    }
    cout << "It will take you " << months << " months to pay off your loan" << endl;
    return 0;
}