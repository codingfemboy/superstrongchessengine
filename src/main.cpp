#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    while (getline (cin, input)) {
        if (input == "uci") {
            cout << "id name MyCoolEngine 1.0\nid author codingfemboy\n\n";
            cout << "option UCI_ELO 800\n";
            cout << "uciok\n";
        }
        else if (input == "debug on") {} else if (input == "debug off") {}
        else if (input == "isready") cout << "readyok\n";
        else {
            cout << "Invalid input\n";
        }
    }
    return 0;
}
