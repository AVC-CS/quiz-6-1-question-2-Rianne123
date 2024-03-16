#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

int writeFile() {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 0;
    }
}

int readFile() {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file." << endl;
        return 0;
    }
}