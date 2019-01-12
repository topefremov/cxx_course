#include <iostream>
#include <vector>

using namespace std;

vector<int> get_temperatures();

unsigned long long int get_avg_temperature(const vector<int> &temperatures);

vector<int> get_more_than_avg_days(const vector<int> &temperatures, unsigned long long int avg);

void print_vector(const vector<int> &v);

int main() {
    vector<int> temperatures = get_temperatures();
    unsigned long long int avg = get_avg_temperature(temperatures);
    vector<int> more_than_avg_days = get_more_than_avg_days(temperatures, avg);
    print_vector(more_than_avg_days);
    return 0;
}

void print_vector(const vector<int> &v) {
    cout << v.size() << endl;
    for (auto e : v) {
        cout << e << " ";
    }
}

vector<int> get_more_than_avg_days(const vector<int> &temperatures, unsigned long long int avg) {
    vector<int> more_than_avg_days;
    int index = 0;
    for(int v : temperatures) {
        if (v > avg) {
            more_than_avg_days.push_back(index);
        }
        ++index;
    }
    return more_than_avg_days;
}

unsigned long long int get_avg_temperature(const vector<int> &temperatures) {
    int sum = 0;
    for (const int& v : temperatures) {
        sum += v;
    }
    return sum / temperatures.size();
}

vector<int> get_temperatures() {
    unsigned long long int n;
    cin >> n;
    vector<int> temperatures(n);
    for (int& v : temperatures) {
        cin >> v;
    }
    return temperatures;
}