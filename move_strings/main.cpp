#include <iostream>
#include <vector>
#include <string>

using namespace std;

void MoveStrings(vector<string>& v1, vector<string>& v2) {
    for (const auto &el : v1) {
        v2.push_back(el);
    }
    v1.clear();
}

int main() {
    return 0;
}