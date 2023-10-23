#include <iostream>

using namespace std;

int main() {
    int bilangan, hasil;

    cout << "Masukan bilangan anda: ";
    cin >> bilangan;

    cout << bilangan << " = ";

    while (bilangan > 0) {
        if (bilangan != 1) {
            cout << bilangan << " + ";
        } else {
            cout << bilangan << " = ";
        }
        hasil += bilangan;
        bilangan--;
    }

    cout << hasil << endl;

    return 0;
}
