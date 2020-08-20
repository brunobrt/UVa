#include <iostream>

using namespace std;

int main() {

    int tests, rows, cols;
    cin >> tests;
    while(tests--) {
        cin >> rows >> cols;
        cout << ((rows/3) * (cols/3)) << endl;
    }
    return 0;
}