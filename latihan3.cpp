#include <iostream>

using namespace std;

int main() {
    int bilangan1, bilangan2, hasil = 1;

    cout << "Masukan bilangan pertama anda: ";
    cin >> bilangan1;

    cout << "Masukan bilangan kedua anda: ";
    cin >> bilangan2;

    if (bilangan1 < bilangan2) {
        int temp = bilangan1;
        bilangan1 = bilangan2;
        bilangan2 =  temp;
    }

    hasil = bilangan1;

    while (hasil % bilangan2 != 0) {
        hasil += hasil;
    }

    cout << hasil << endl;

    return 0;
}
