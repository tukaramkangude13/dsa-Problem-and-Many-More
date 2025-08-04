#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

// Function to remove duplicate characters from a string while maintaining order
string removeDuplicates(string str) {
    unordered_set<char> seen; // To track seen characters
    string result = "";
    for (char c : str) {
        if (seen.find(c) == seen.end()) { // If character not seen before
            seen.insert(c);
            result += c;
        }
    }
    return result;
}

// Function to generate unique substrings and process them
void generateProcessedSubstrings(string str, set<string>& uniqueProcessed) {
    int n = str.length();
    for (int i = 0; i < n; i++) {           // Starting index
        for (int j = i; j < n; j++) {       // Ending index
            string substr = str.substr(i, j - i + 1);   // Generate substring
            string reduced = removeDuplicates(substr); // Remove duplicates
            uniqueProcessed.insert(reduced);           // Store reduced version
        }
    }
}

int main() {
    string str = "abcabcbb";
    set<string> uniqueProcessed;

    // Generate and process substrings
    generateProcessedSubstrings(str, uniqueProcessed);

    // Print the count of unique processed substrings
    cout << "Total unique processed substrings: " << uniqueProcessed.size() << endl;

    // Print all unique processed substrings
    cout << "Unique processed substrings:" << endl;
    for (const auto& s : uniqueProcessed) {
        cout << "\"" << s << "\"" << endl;
    }

    return 0;
}
