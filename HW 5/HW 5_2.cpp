#include <iostream>
using namespace std;

main() {
    char h;
    cout << "harf mored nazar: ";
    cin >> h;
    switch (h)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "VOWEL";
        break;
    
    default:
        cout << "NOT VOWEL";
        break;
    }
}