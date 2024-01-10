#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


void mergeArrays(int array1[], int array2[], int mergedArray[], int size1, int size2);
void findCommonElements(int array1[], int array2[], int size1, int size2);
bool checkPalindrome(const string& inputString);

int main() {
    const int size1 = 5;
    const int size2 = 7;

    int array1[size1];
    int array2[size2];

    // Input FROM USER
    cout << "Enter " << size1 << " elements for the first array:\n";
    for (int i = 0; i < size1; ++i) {
        cin >> array1[i];
    }

    cout << "Enter " << size2 << " elements for the second array:\n";
    for (int i = 0; i < size2; ++i) {
        cin >> array2[i];
    }

    // Merge arrays and print
    int mergedArray[size1 + size2];
    mergeArrays(array1, array2, mergedArray, size1, size2);

    cout << "\nMerged Array in Ascending Order:\n";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << mergedArray[i] << " ";
    }

    // Find and display common elements
    cout << "\n\nCommon Elements between the two arrays:\n";
    findCommonElements(array1, array2, size1, size2);

    // Input a sentence and check it is a palindrome
    cin.ignore(); 
    string inputSentence;
    cout << "\nEnter a sentence to check if it is a palindrome:\n";
    getline(cin, inputSentence);

    if (checkPalindrome(inputSentence)) {
        cout << "\nThe entered sentence is a palindrome.\n";
    } else {
        cout << "\nThe entered sentence is not a palindrome.\n";
    }

    return 0;
}

void mergeArrays(int array1[], int array2[], int mergedArray[], int size1, int size2) {
    copy(array1, array1 + size1, mergedArray);
    copy(array2, array2 + size2, mergedArray + size1);
    sort(mergedArray, mergedArray + size1 + size2);
}

void findCommonElements(int array1[], int array2[], int size1, int size2) {
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if (array1[i] == array2[j]) {
                cout << array1[i] << " ";
                break; // Break to avoid duplicate output
            }
        }
    }
}

bool checkPalindrome(const string& inputString) {
    int start = 0;
    int end = inputString.length() - 1;

    while (start < end) {
        if (inputString[start] != inputString[end]) {
            return false;
        }
        ++start;
        --end;
    }

    return true;
}

