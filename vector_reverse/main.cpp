#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& v) {
    int begin = 0;
    int end = static_cast<int>(v.size() - 1);
    while (begin <= end) {
        int temp = v[begin];
        v[begin] = v[end];
        v[end] = temp;
        begin++;
        end--;
    }
}

void print_vector(const vector<int>& v) {
    for (auto el : v) {
        cout << el << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {};
    Reverse(v1);
    print_vector(v1);
//
//    vector<int> v2 = {1, 2, 3, 4};
//    Reverse(v2);
//    print_vector(v2);
    return 0;
}

