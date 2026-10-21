#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin.ignore(); // Clear buffer if needed
    getline(cin, text);

    int totalVowels = countVowels(text);

    cout << "Total number of vowels in the string: " << totalVowels << endl;

    return 0;
}
