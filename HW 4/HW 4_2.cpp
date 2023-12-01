#include <iostream>
using namespace std;

main() {
    float x, y, z;
    cout << "enter x:";
    cin >> x;
    cout << "enter y:";
    cin >> y;
    cout << "enter z:";
    cin >> z;
    cout << "answer = " << ((x - y) * (x + z))/((x + y + z) * (x + y + z) + 1);
}