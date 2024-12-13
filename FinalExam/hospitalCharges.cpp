#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Class to manage patient account details
class PatientAccount {
private:
  int totalCharges;           // Total charges for the patient
  int numDaysSpent;           // Number of days spent in the hospital
  const int dailyRateDollars; // Daily rate in the hospital

public:
  // Constructor to initialize charges, days, and daily rate
  PatientAccount() : totalCharges(0), numDaysSpent(0), dailyRateDollars(500) {}

  // Method to add charges to the total
  void addCharges(int amount) { totalCharges += amount; }

  // Method to set the number of days spent
  void setNumDaysSpent(int days) {
    numDaysSpent = days;
    totalCharges += numDaysSpent * dailyRateDollars;
  }

  // Method to get the total charges
  int getTotalCharges() const { return totalCharges; }
};

// Class to manage surgery charges
class Surgery {
private:
  unordered_map<string, int> surgeryCharges;

public:
  // Constructor to initialize surgery types and charges
  Surgery() {
    surgeryCharges["ankle"] = 200;
    surgeryCharges["arm"] = 400;
    surgeryCharges["brain"] = 1000;
    surgeryCharges["heart"] = 700;
    surgeryCharges["wrist"] = 300;
  }

  // Method to add surgery charges to PatientAccount
  void addSurgeryCharge(PatientAccount &account, const string &surgeryType) {
    if (surgeryCharges.find(surgeryType) != surgeryCharges.end()) {
      account.addCharges(surgeryCharges[surgeryType]);
    } else {
      cout << "Invalid surgery type selected.\n";
    }
  }
};

// Class to manage medication charges
class Pharmacy {
private:
  unordered_map<string, int> medicationCharges;

public:
  // Constructor to initialize medication types and charges
  Pharmacy() {
    medicationCharges["antibiotic"] = 50;
    medicationCharges["antimalarial"] = 150;
    medicationCharges["analgesic"] = 75;
    medicationCharges["antiseptic"] = 300;
    medicationCharges["antipyretic"] = 200;
  }

  // Method to add medication charges to PatientAccount
  void addMedicationCharge(PatientAccount &account,
                           const string &medicationType) {
    if (medicationCharges.find(medicationType) != medicationCharges.end()) {
      account.addCharges(medicationCharges[medicationType]);
    } else {
      cout << "Invalid medication type selected.\n";
    }
  }
};

// Main program
int main() {
  PatientAccount patientAccount; // Create a PatientAccount object
  Surgery surgery;               // Create a Surgery object
  Pharmacy pharmacy;             // Create a Pharmacy object

  int days;              // Number of days spent in the hospital
  string surgeryType;    // Surgery type chosen by the user
  string medicationType; // Medication type chosen by the user

  // Input number of days spent
  cout << "Enter the number of days spent in the hospital: ";
  cin >> days;
  patientAccount.setNumDaysSpent(days);

  // Input surgery type
  cout << "Enter the type of surgery (ankle, arm, brain, heart, wrist): ";
  cin >> surgeryType;
  surgery.addSurgeryCharge(patientAccount, surgeryType);

  // Input medication type
  cout << "Enter the type of medication (antibiotic, antimalarial, analgesic, "
          "antiseptic, antipyretic): ";
  cin >> medicationType;
  pharmacy.addMedicationCharge(patientAccount, medicationType);

  // Display total charges
  cout << "Total charges for the patient: $" << patientAccount.getTotalCharges()
       << endl;

  return 0;
}
