//file handling in vector
#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }

    vector<string> data;

    string line;
    while (getline(inputFile, line)) {
        data.push_back(line);
    }

    inputFile.close();

    cout << "Data from the vector:" << endl;
    for (const auto& item : data) {
        cout << item << endl;
    }

    if (!outputFile.is_open()) {
        cerr << "Error opening output file!" << endl;
        return 1;
    }

    for (const auto& item : data) {
        outputFile << item << endl;
    }

    outputFile.close();

    cout << "Data has been written to 'output.txt'" << endl;

    return 0;
}
