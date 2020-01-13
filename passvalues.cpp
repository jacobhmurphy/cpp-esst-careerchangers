#include <iostream>
using namespace std;

double average(double a, double b, double c)
{
    a += 3;
    b += 4;
    c += 5;
    return (a + b + c) / 3;
}

int main(int argc, char const *argv[])
{
    double x = 5, y = 10, z = 15;
    double avg = average(x, y, z);
    cout << avg << endl;
    return 0;
}
