#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Happy Birthday, " << name
         << "! You are turning " << age << "." << endl;

    return 0;
}