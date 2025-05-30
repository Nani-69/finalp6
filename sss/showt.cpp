void showAllRecordsForPatient() {
    int id;
    cout << "Enter patient ID: ";
    cin >> id;
    cin.ignore();

    bool found = false;
    for (const auto& p : patients) {
        if (p.id == id) {
            cout << "Date: " << p.date << ", Diagnosis: " << p.diagnosis
                 << ", Doctor: " << p.assignedDoctor << ", Amount: " << p.totalAmount
                 << ", Emergency: " << (p.emergency ? "Yes" : "No") << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "No records found for patient ID " << id << ".\n";
    }
}
