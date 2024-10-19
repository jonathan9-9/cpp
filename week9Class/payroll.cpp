#include <iostream>
using namespace std;

class PayRoll {
private:
  double hourlyPayRate;
  double numHoursWorked;
  double totalWeeklyPay;

public:
  PayRoll(double payRate, double numHours) {
    hourlyPayRate = payRate;
    setNumHoursWorked(numHours);
  }

  void setNumHoursWorked(double numHours) {
    if (numHours < 0) {
      numHoursWorked = 0;
    } else if (numHours > 60) {
      cout << "Error: Hours must be 60 or less. Hours are now 60." << endl;
      numHoursWorked = 60;
    } else {
      numHoursWorked = numHours;
    }
  }

  double getGrossPay() { return hourlyPayRate * numHoursWorked; }

  void showInfo() { cout << "Gross Pay: $" << getGrossPay() << endl; }
};

int main() {
  const int numEmployees = 7;

  PayRoll employeeData[numEmployees] = {
      PayRoll(20.0, 0),  PayRoll(21.45, 0), PayRoll(23.0, 0),
      PayRoll(17.85, 0), PayRoll(22.50, 0), PayRoll(24.25, 0),
      PayRoll(18.25, 0),
  };

  for (int i = 0; i < numEmployees; i++) {
    double hours;
    cout << "Enter hours worked for Employee " << i + 1 << ":\n";
    cin >> hours;
    employeeData[i].setNumHoursWorked(hours);
  }

  cout << "Employee Total Pay Information: \n";
  for (int i = 0; i < numEmployees; i++) {
    cout << "Employee " << i + 1 << ":\n";
    employeeData[i].showInfo();
  }
  return 0;
}
