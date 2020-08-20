#include <iostream>

using namespace std;

int main(){

    int t, n, ans;
    cin >> t;
    
    while(t--){
        cin >> n;
        ans = (((((((n * 567) /9) +7492) *235) /47) -498) /10) %10;
        cout << abs(ans) << endl;
    }

    return 0;
}