#include <iostream>
using namespace std;

int main()
{
    const double conversion = 1.60934;
    double miles, kilometers;

    cout << "Enter distance in miles: ";
    cin >> miles;

    cout << miles << " miles = "
         << miles * conversion << " kilometers" << endl;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    cout << kilometers << " kilometers = "
         << kilometers / conversion << " miles" << endl;

    return 0;
}