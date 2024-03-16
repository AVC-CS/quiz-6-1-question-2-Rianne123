#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

    string filename;
    int empN;
    filename = "employee.txt";

int readFile() {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 0;
    }

    int numEmployees;
    inFile >> numEmployees;
    cout << "ID \tName \tDepartment \tSalary" << endl;

    double totalSalary = 0;

    for (int i = 0; i < numEmployees; ++i) {
        int id;
        string name, department;
        double salary;
        
        inFile >> id >> name >> department >> salary;
        
        cout << id << "\t" << name << "\t" << department << "\t" << salary << endl;
        totalSalary += salary;
    }

    double averageSalary = totalSalary / numEmployees;
    cout << "\t\tTotal: " << totalSalary << " Average: " << averageSalary << endl;

    inFile.close();

    return numEmployees;
}

int writeFile() {
     ofstream ofs;

    ofs.open(filename);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    int id, num;
    string eName, dName;
    double salary;

    cout << "Enter the number of employees: ";
    cin >> num;
    ofs << num << endl; 

    for (int i = 0; i < num; i++) {
        cout << "Enter Employees id, name, department, and salary: ";
        cin >> id >> eName >> dName >> salary;

        ofs << id << " " << eName << " " << dName << " " << salary << endl; 
    }

    ofs.close();
    cout << "Data Saved" << endl;
}

