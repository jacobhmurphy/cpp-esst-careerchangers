#include <iostream>
using namespace std;

double roomSize()
{
    double roomWidth, roomLength, roomArea;
    cout << "How long is the room? ";
    cin >> roomWidth;
    cout << "How wide is the room? ";
    cin >> roomLength;
    roomArea = roomWidth * roomLength;
    return roomArea;
}

void cost(double area)
{
    if (area <= 120)
    {
        cout << "The cost of the cleaning is $99" << endl;
    }
    else
    {
        double extraSpace, extraCost;
        extraSpace = area - 120;
        extraCost = (.25 * extraSpace) + 99;
        cout << "The cost of the cleaning is " << extraCost << endl;
    }
}

int main(int argc, char const *argv[])
{
    double area = roomSize();
    cost(area);
    return 0;
}
