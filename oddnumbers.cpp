#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (auto i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
