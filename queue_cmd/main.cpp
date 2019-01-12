#include <iostream>
#include <vector>

using namespace std;

void fill_commands(vector<string> &commands, vector<int> &commands_args);


void process_commands(vector<int> &queue, const vector<string> &commands, const vector<int> &commands_args);

int main() {
    vector<int> queue;
    vector<string> commands;
    vector<int> commands_args;
    fill_commands(commands, commands_args);
    process_commands(queue, commands, commands_args);

    return 0;
}

void process_commands(vector<int> &queue, const vector<string> &commands, const vector<int> &commands_args) {
    int cur_index = 0;
    for (const string& c : commands) {
        if (c == "COME") {
            queue.resize(queue.size() + commands_args[cur_index]);
        }
        if (c == "WORRY") {
            queue[commands_args[cur_index]] = 1;
        }
        if (c == "QUIET") {
            queue[commands_args[cur_index]] = 0;
        }
        if (c == "WORRY_COUNT") {
            int worried = 0;
            for (auto el : queue) {
                if (el == 1) {
                    ++worried;
                }
            }
            cout << worried << endl;
        }
        ++cur_index;
    }
}

void fill_commands(vector<string> &commands, vector<int> &commands_args) {
    uint64_t n;
    cin >> n;
    commands.assign(n, "");
    commands_args.assign(n, 0);
    int cur_index = 0;
    for (string& c : commands) {
        cin >> c;
        if (c != "WORRY_COUNT") {
            cin >> commands_args[cur_index];
        }
        ++cur_index;
    }
}