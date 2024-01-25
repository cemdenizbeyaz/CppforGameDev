#include <iostream>
using namespace std;

enum Weekdays {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

void PrintDay(Weekdays day) {
    switch (day) {
    case SUNDAY:
        cout << "Today is Sunday." << endl;
        break;
    case MONDAY:
        cout << "Today is Monday." << endl;
        break;
    case TUESDAY:
        cout << "Today is Tuesday." << endl;
        break;
    case WEDNESDAY:
        cout << "Today is Wednesday." << endl;
        break;
    case THURSDAY:
        cout << "Today is Thursday." << endl;
        break;
    case FRIDAY:
        cout << "Today is Friday." << endl;
        break;
    case SATURDAY:
        cout << "Today is Saturday." << endl;
        break;
    default:
        cout << "Invalid day." << endl;
        break;
    }
}

int main() {
    Weekdays today = SATURDAY;
    PrintDay(today);

    system("pause");
}