#include <iostream>
#include <fstream>

using namespace std;

int countWords(const string& fileName) {
    ifstream inputFile(fileName);

    if (!inputFile) {
        cerr << "Error opening file.\n";
        return -1;
    }

    int wordCount = 0;
    string word;

    while (inputFile >> word) {
        ++wordCount;
    }

    cout << "Total number of words in '" << fileName << "': " << wordCount << '\n';

    inputFile.close();
    return wordCount;
}

int main() {
    countWords("input.txt");
    return 0;
}

