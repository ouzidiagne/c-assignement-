#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14159;
    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    double area = pi * pow(radius, 2);
    double perimeter = 2 * pi * radius;

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}