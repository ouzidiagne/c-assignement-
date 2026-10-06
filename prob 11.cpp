#include <iostream>
using namespace std;

int main()
{
    double weight, height;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    double bmi = (weight * 703) / (height * height);

    cout << "BMI: " << bmi << endl;

    return 0;
}