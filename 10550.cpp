#include <iostream>

using namespace std;

int main(){

    int start, first, middle, last;
    
    while(cin >> start >> first >> middle >> last) {
        if (!start && !first && !middle && !last) break;
        int total = 1080 + ((start - first + 40) % 40 + (middle - first + 40) % 40 + (middle - last + 40) % 40) * 9;
        cout << total << endl;
    }
    return 0;
}