#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e';
}

string splitIntoSyllables(const string& word) {
    string result;
    for (int i = 0; i < word.length(); ++i) {
        if (isVowel(word[i])) {
            // If the current character is a vowel, it's a syllable
            result += word[i];
        } else {
            // If the current character is a consonant, check the next character
            if (i + 1 < word.length() && !isVowel(word[i + 1])) {
                // If the next character is also a consonant, it's part of the current syllable
                result += word[i];
            } else {
                // Otherwise, it's the end of the syllable
                result += word[i];
                result += '.'; // Add a dot to represent the syllable boundary
            }
        }
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string word;
        cin >> word;

        string result = splitIntoSyllables(word);
        cout << result << endl;
    }

    return 0;
}
