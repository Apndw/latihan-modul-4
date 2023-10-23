#include <iostream>

using namespace std;

int main() {
    int bilangan1, bilangan2, hasil = 1;

    cout << "Masukan bilangan pertama anda: ";
    cin >> bilangan1;

    cout << "Masukan bilangan kedua anda: ";
    cin >> bilangan2;

    for (int i = 0; i < bilangan2; i++) {
        hasil *= bilangan1;
    }

    cout << hasil << endl;

    return 0;
}
