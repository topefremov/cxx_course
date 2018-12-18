#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool IsPalindrom(string str) {
    string copy = str;
    reverse(begin(copy), end(copy));
    return str == copy;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> result;
    for (auto word : words) {
        if (IsPalindrom(word) && word.size() >= minLength) {
            result.push_back(word);
        }
    }
    return result;
}

int main() {
    return 0;
}