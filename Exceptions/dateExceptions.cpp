#include <iostream>
using namespace std;

class InvalidDay : public invalid_argument {
public:
  InvalidDay(const string &message) : invalid_argument(message) {}
};

class InvalidMonth : public invalid_argument {
public:
  InvalidMonth(const string &message) : invalid_argument(message) {}
};

class Date {

public:
  // default constructor
  Date(int d, int m, int y) {
    if (d < 1 || d > 31) {
      throw InvalidDay("Day must be between 1 and 31 inclusive. Try again");
    }
    if (m < 1 || m > 12) {
      throw InvalidMonth("Invalid month. Month should be between 1 and 12.");
    }
    day = d;
    month = m;
    year = y;
  }

  void printFirstDate() { cout << month << "/" << day << "/" << year << "\n"; }

  void printSecondDate() {
    cout << getMonthName(month) << " " << day << ", " << year << "\n";
  }

  void printThirdDate() {
    cout << day << " " << getMonthName(month) << " " << year << "\n";

    cout << endl;
  }

private:
  int day, month, year;

  string getMonthName(int m) {
    static const string months[] = {
        "January", "February", "March",     "April",   "May",      "June",
        "July",    "August",   "September", "October", "November", "December"};
    return months[m - 1];
  }
};

int main() {
  int day, month, year;

  while (true) {
    try {
      cout << "Enter the day as a number (1-31): ";
      cin >> day;

      cout << "Enter month as a number (1-12): ";
      cin >> month;

      cout << "Enter the year: ";
      cin >> year;

      cout << endl;

      Date date(day, month, year);
      date.printFirstDate();
      date.printSecondDate();
      date.printThirdDate();
      break;
    } catch (const InvalidDay &e) {
      cerr << e.what() << "\n";
    } catch (const InvalidMonth &e) {
      cerr << e.what() << "\n";
    }
  }

  while (day > 31 || day < 1 || month > 12 || month < 1) {
    cout << "Please try again. Enter any value 1-31 for the day and 1-12 for "
            "the month"
         << "\n";
    cout << "Enter the day again: ";
    cin >> day;
    cout << "Enter month again: ";
    cin >> month;
    cout << "Re-enter the year: ";
    cin >> year;

    cout << endl;
  }

  return 0;
}
