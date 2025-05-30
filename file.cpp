#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

struct Patient {
    int id;
    string fullName;
    int age;
    char gender; // 'M' or 'F'
    string diagnosis;
    string assignedDoctor;
    string date; // registration or visit date
    double totalAmount;
    bool emergency;
};

vector<Patient> patients;

string getCurrentDate() {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    char dateStr[11]; // Format: YYYY-MM-DD
    snprintf(dateStr, sizeof(dateStr), "%04d-%02d-%02d",
             1900 + ltm->tm_year, 1 + ltm->tm_mon, ltm->tm_mday);
    return string(dateStr);
}

Patient* findPatientById(int id) {
    for (auto& patient : patients) {
        if (patient.id == id) {
            return &patient;
        }
    }
    return nullptr;
}

vector<Patient*> findPatientsByName(const string& name) {
    vector<Patient*> results;
    for (auto& patient : patients) {
        if (patient.fullName == name) {
            results.push_back(&patient);
        }
    }
    return results;
}

bool hasPatientHistory(int id) {
    return findPatientById(id) != nullptr;
}

void addPatient() {
   
//Meseret

}

void searchPatient() {
    
//wehib

}

void updatePatient() {
    
//T-michael


}

void showAllRecordsForPatient() {

//meseret

    
}

void saveDataToFile(const string& filename) {

//wehib

   
}

void menu() {
    while (true) {
        cout << "\nHospital Management System\n";
        cout << "1. Add patient\n";
        cout << "2. Search patient\n";
        cout << "3. Update patient info\n";
        cout << "4. Show all records for a patient\n";
        cout << "5. Save data\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                searchPatient();
                break;
            case 3:
                updatePatient();
                break;
            case 4:
                showAllRecordsForPatient();
                break;
            case 5:
                saveDataToFile("patients_data.csv");
                break;
            case 6:
                cout << "Exiting...\n";
                return;
            default:
                cout << "Invalid choice, try again.\n";
        }
    }
}

int main() {
    menu();
    return 0;
}