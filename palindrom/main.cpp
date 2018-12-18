#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool IsPalindrom(const string &str) {
    string copy = str;
    reverse(begin(copy), end(copy));
    return str == copy;
}

int main() {
    string str;
    cin >> str;
    if (IsPalindrom(str)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}