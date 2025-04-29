#include <iostream>
#include <string>

using namespace std;

int main() {
    string codez[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    string targetS = "B";

    for (const string& code : codez) {
        if (!code.empty() && code[0] == targetS[0]) { 
            cout << "\"" << code << "\" starts with '" << targetS << "'" << endl;
        }
    }

    return 0;
}