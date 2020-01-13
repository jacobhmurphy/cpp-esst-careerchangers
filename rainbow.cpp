// This file corresponds to Lesson 6.4 of C++ Essential Training for Career Changers on Lynda.com.
// This was a challenge to print the colors of the rainbow.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string rainbow[7] = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"};
    for (int i = 0; i < 7; i++)
    {
        cout << rainbow[i] << " ";
    }
    return 0;
}
