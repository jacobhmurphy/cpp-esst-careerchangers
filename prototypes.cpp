#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double principal = 0;
double rate = 0;
double timeYears = 0;

// function signatures
void getValues();
double getInterest();

int main(int argc, char **argv)
{
	getValues();
	double interest = getInterest();
	cout << "The amount of interest earned is $" << interest << endl;
	return 0;
}

void getValues()
{
	cout << "Enter principal amount: ";
	cin >> principal;
	cout << "Enter the interest rate, i.e. 5% as .05: ";
	cin >> rate;
	cout << "How long is the loan? ";
	cin >> timeYears;
}

double getInterest()
{
	double interest;
	interest = principal * rate * timeYears;
	return interest;
}