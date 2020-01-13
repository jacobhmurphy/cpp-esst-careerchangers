#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    double housePrice;
    cout << "Enter the name of the homeowner: ";
    cin >> name;
    cout << "Enter the sales price of the house: ";
    cin >> housePrice;
    double sellersCost = .06 * housePrice;
    double agentCommission = .015 * housePrice;
    cout << "Home Owner" << setw(20) << left << "\tPrice of Home"
         << "\tSeller's Cost"
         << "\tAgent's Commission" << endl;
    cout << name << setw(20) << left << "\t" << housePrice << "\t" << sellersCost << "\t" << agentCommission << endl;
    return 0;
}
