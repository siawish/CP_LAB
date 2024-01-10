#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseWords(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile || !outputFile) {
        cerr << "Error opening files.\n";
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        vector<string> words;
        string word;

        for (char ch : line) {
            if (ch == ' ' || ch == '\t' || ch == '\n') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word += ch;
            }
        }

        if (!word.empty()) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        for (const auto& reversedWord : words) {
            outputFile << reversedWord << ' ';
        }

        outputFile << '\n';
    }

    cout << "Words reversed and written to '" << outputFileName << "'.\n";

    inputFile.close();
    outputFile.close();
}

int main() {
    reverseWords("input.txt", "output_reversed.txt");
    return 0;
}

