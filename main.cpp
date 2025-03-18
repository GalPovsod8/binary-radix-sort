#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

void countingSort(vector<unsigned char> &arr, int bit) {
    vector<unsigned char> output(arr.size());
    vector<int> count(2, 0);
    
    
}

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

void writeOutputFile(const string &filename, const vector<unsigned char> &numbers) {
    ofstream file(filename);
    if (file.is_open()) {
        for (size_t i = 0; i < numbers.size(); i++) {
            if (i > 0) file << " ";
            file << static_cast<int>(numbers[i]);
        }
        file.close();
    }
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