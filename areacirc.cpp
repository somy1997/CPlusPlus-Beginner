#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float r, Area, Circumference;
    cout << "Enter radius\n";
    cin >> r;
    Area = 22 * (pow(r, 2)) / 7;
    Circumference = 2 * 22 * r / 7;
    cout << "Area = " << Area << " Circumference = " << Circumference;
    return 0;
}
