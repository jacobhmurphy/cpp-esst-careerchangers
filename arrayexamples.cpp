#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	string seasons[] = {"Fall", "Winter", "Spring", "Summer"};
	int numbers[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter a number: ";
		cin >> numbers[i];
	}
	// for (int i = 0; i < 10; i++)
	// {
	// 	cout << numbers[i] << " ";
	// }
	return 0;
}
