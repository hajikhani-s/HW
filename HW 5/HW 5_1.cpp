#include <iostream>
using namespace std;

main() {
    int x;
    cout << "meqdrar hoqoq: ";
    cin >> x;
    if (x <= 6000000) {
        cout << x - (x/100) * 0;
    } else if (x >= 6000000 && x < 8000000) {
        cout << x - (x/100) * 5;
    } else if (x >= 8000000 && x < 10000000) {
        cout << x - (x/100) * 10;
    } else if (x >= 10000000 && x < 14000000) {
        cout << x - (x/100) * 15;
    } else if (x >= 14000000 && x < 18000000) {
        cout << x - (x/100) * 20;
    } else if (x >= 18000000 && x < 25000000) {
        cout << x - (x/100) * 25;
    } else {
        cout << x - (x/100) * 30;
    }

}
