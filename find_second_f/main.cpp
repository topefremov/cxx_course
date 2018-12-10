#include <iostream>

using namespace std;

int main() {
    string str;

    cin >> str;

    int f_ind = -2;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'f' && f_ind == -2)
            f_ind = -1;
        else if (str[i] == 'f' && f_ind == -1) {
            f_ind = i;
            break;
        }
    }

    cout << f_ind << endl;

    return 0;
}