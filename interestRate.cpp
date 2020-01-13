#include <iostream>

using namespace std;

int timeVar = 5;
double rate = .02;
double principal = 500;
double interest = 0;

int main(int argc, const char * argv[]) {
    interest = principal * rate * timeVar;
    cout << interest << "\n";
    // cout << "Hello, World!\n";
    return 0;
}
