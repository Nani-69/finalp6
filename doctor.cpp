int id;
    cout << "Enter patient ID to update: ";
    cin >> id;
    cin.ignore();

    Patient* p = findPatientById(id);
    if (!p) {
        cout << "Patient not found.\n";
        return;
    }

    cout << "What do you want to update?\n";
    cout << "1. Full name\n2. Age\n3. Gender\n4. Diagnosis\n5. Assigned doctor\n6. Total amount\n";
    int choice;
    cin >> choice;
    cin.ignore();

    switch (choice) {
        case 1: {
            string name;
            cout << "Enter new full name: ";
            getline(cin, name);
            p->fullName = name;
            break;
        }
        case 2: {
            int age;
            cout << "Enter new age: ";
            cin >> age;
            cin.ignore();
            p->age = age;
            break;
        }
        case 3: {
            char gender;
            cout << "Enter new gender (M/F): ";
            cin >> gender;
            cin.ignore();
            p->gender = gender;
            break;
        }
        case 4: {
            string diagnosis;
            cout << "Enter new diagnosis: ";
            getline(cin, diagnosis);
            p->diagnosis = diagnosis;
            break;
        }
        case 5: {
            string doctor;
            cout << "Enter new assigned doctor: ";
            getline(cin, doctor);
            p->assignedDoctor = doctor;
            break;
        }
        case 6: {
            double amount;
            cout << "Enter new total amount: ";
            cin >> amount;
            cin.ignore();
            p->totalAmount = amount;
            break;
        }
        default:
            cout << "Invalid choice.\n";
            break;
    }

    cout << "Patient info updated.\n";