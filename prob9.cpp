#include <iostream>
using namespace std;

int main()
{
    double balance, rate;

    cout << "Enter starting balance: ";
    cin >> balance;

    cout << "Enter interest rate: ";
    cin >> rate;

    balance *= (1 + rate);
    cout << "Balance after year 1: " << balance << endl;

    balance *= (1 + rate);
    cout << "Balance after year 2: " << balance << endl;

    balance *= (1 + rate);
    cout << "Balance after year 3: " << balance << endl;

    return 0;
}