#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    // Leap year is divisible by 4 and not divisible by 100
    // unless it is also divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
