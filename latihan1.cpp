#include <iostream>

using namespace std;

int main() {
  int bilangan, index, hasil = 0;

  cout << "Masukan bilangan : ";
  cin >> bilangan;

  cout << "Total Nilai = ";

  for (index = bilangan; index > 0; index--) {
    if (index != 1) {
      cout << index << " + ";
    } else {
      cout << index << " = ";
    }

    hasil += index;
  }

  cout << hasil << endl;

  return 0;
}
