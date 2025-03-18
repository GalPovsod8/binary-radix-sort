#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

vector<unsigned char> readInputFile(const string &filename) {
    ifstream file(filename);
    vector<unsigned char> numbers;
    string line, temp;
    
    if (file.is_open()) {
        getline(file, line);
        file.close();
        stringstream ss(line);
        int num;
        while (ss >> num)
            numbers.push_back(static_cast<unsigned char>(num));
    }
    return numbers;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Uporaba: " << argv[0] << " <vhodna_datoteka>" << endl;
        return 1;
    }
    
    string inputFile = argv[1];
    string outputFile = "out.txt";

    vector<unsigned char> numbers = readInputFile(inputFile);
    
    return 0;
}