#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t, s1[3];
    cin >> t;
    for(int i = 1; i <= t; ++i){
        cin >> s1[0] >> s1[1] >> s1[2];
        sort(s1, s1+3);
        cout << "Case " << i << ": " << s1[1] << endl;
    }

    return 0;
}