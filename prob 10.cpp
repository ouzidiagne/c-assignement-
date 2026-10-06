#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, e;

    cout << "Enter five numbers: ";
    cin >> a >> b >> c >> d >> e;

    double average = (a + b + c + d + e) / 5;

    cout << "Average: " << average << endl;

    return 0;
}