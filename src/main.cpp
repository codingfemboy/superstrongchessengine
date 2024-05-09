#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    bool debug_mode;
    while (getline (cin, input)) {
        if (input == "uci") {
            cout << "id name MyCoolEngine 1.0\n";
            cout << "id author codingfemboy\n";
            cout << "option UCI_ELO 800\n";
            cout << "uciok\n";
        } else if (input == "debug on") {
            debug_mode = true;
        } else if (input == "debug off") {
            debug_mode = false;
        } else {
            cout << "Invalid input\n";
        }
    }
    return 0;
}
