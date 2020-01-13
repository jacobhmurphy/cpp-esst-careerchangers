#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float x = .7;
    if (abs(x - .7) < .001)
    {
        cout << "They are the same" << endl;
    }
    else
    {
        cout << "The numbers are different" << endl;
        cout << x << endl;
    }

    /* code */
    return 0;
}
