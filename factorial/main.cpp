#include <iostream>

using namespace std;

int Factorial(int value) {
    int result = 1;
    for (int i = 2; i <= value; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int value;
    cin >> value;
    cout << Factorial(value) << endl;
    return 0;
}