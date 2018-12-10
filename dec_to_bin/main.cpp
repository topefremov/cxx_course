#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> binary;
    int val;
    cin >> val;

    int quotient = val;

    while (quotient != 0) {
        int rem = quotient % 2;
        quotient = quotient / 2;
        binary.insert(binary.begin(), rem);
    }

    for (auto i : binary)
        cout << i;
    return 0;
}