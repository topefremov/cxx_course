#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(const vector<int>& v) {
    vector<int> result;
    for (auto i = static_cast<int>(v.size() - 1); i >= 0; i--) {
        result.push_back(v[i]);
    }
    return result;
}

int main() {
    return 0;
}