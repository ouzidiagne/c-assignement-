/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    const double rate = 0.05;
    double principal;
    int time;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time (years): ";
    cin >> time;

    double interest = principal * rate * time;
    double total = principal + interest;

    cout << "Interest: " << interest << endl;
    cout << "Total amount: " << total << endl;

    return 0;
}