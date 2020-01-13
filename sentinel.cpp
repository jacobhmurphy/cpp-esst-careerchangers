#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cout << "Enter the name of the first student: ";
    cin >> input;
    while (input != "q")
    {
        cout << "You entered " << input << ". Enter the next name (press q to quit): ";
        cin >> input;
    }
    return 0;
}