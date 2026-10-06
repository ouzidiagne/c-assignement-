#include <iostream>
using namespace std;

int main()
{
    double bill;
    int people;

    cout << "Enter total bill: ";
    cin >> bill;

    cout << "Enter number of people: ";
    cin >> people;

    double each = bill / people;

    cout << "Each person pays: " << each << endl;

    return 0;
}