#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> findMatchedWords(vector<string> dict, string pattern) {
    unordered_map<char, int> patt;
    for (int i = 0; i < pattern.size(); i++) {
        patt[pattern[i]]++;
    }

    vector<int> pat;
    vector<string> ans;

    for (int i = 0; i < pattern.size(); i++) {
        pat.push_back(patt[pattern[i]]);
    }

    for (int i = 0; i < dict.size(); i++) {
        unordered_map<char, int> temp;
        for (int j = 0; j < dict[i].size(); j++) {
            temp[dict[i][j]]++;
        }

        vector<int> tem;
        for (int k = 0; k < dict[i].size(); k++) {
            tem.push_back(temp[dict[i][k]]);
        }

        if (tem == pat) {
            ans.push_back(dict[i]);
        }
    }

    return ans;
}

int main() {
   
    string word;
    getline(cin, word);

    string pattern;
    cin >> pattern;

    vector<string> dictionary;
    size_t pos = 0;
    while ((pos = word.find(' ')) != string::npos) {
        dictionary.push_back(word.substr(0, pos));
        word.erase(0, pos + 1);
    }
    dictionary.push_back(word);

    vector<string> result = findMatchedWords(dictionary, pattern);

    

    for (const string& word : result) {
        cout << word << " ";
    }

    return 0;
}
