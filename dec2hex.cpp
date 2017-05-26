
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << hex << setfill('0');
    string line;
    while (getline(cin, line)) {
        while (!line.empty()) {
            string::iterator num = find_if(line.begin(), line.end(), ::isdigit);
            cout << string(line.begin(), num);
            if (num != line.end()) {
                char *start = &(*num), *end = NULL;
                long unsigned value = strtoul(&(*num), &end, 10);
                cout << "0x" << setw(2) << value;
                num += end - start;
            }
            line.erase(line.begin(), num);
        }
        cout << endl;
    }
    return 0;
}
