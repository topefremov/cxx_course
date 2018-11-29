#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    vector<string> _strings = {a, b, c};
    string min_str = *min_element(_strings.begin(), _strings.end());
    cout << min_str << endl;
    return 0;
}