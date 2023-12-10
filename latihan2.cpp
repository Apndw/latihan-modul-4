#include <iostream>

using namespace std;

int main() {
  int angka, pangkat, hasil = 1;

  cout << "Masukan bilangan pertama anda: ";
  cin >> angka;

  cout << "Masukan bilangan kedua anda: ";
  cin >> pangkat;

  for (int i = 0; i < pangkat; i++) {
    hasil *= angka;
  }

  cout << "Hasil Pangkat : " << hasil << endl;

  return 0;
}
