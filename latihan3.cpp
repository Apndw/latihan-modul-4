#include <iostream>

using namespace std;

int main() {
  int bil1, bil2, kpk;

  cout << "Masukan bilangan pertama anda: ";
  cin >> bil1;

  cout << "Masukan bilangan kedua anda: ";
  cin >> bil2;

  kpk = (bil1 > bil2) ? bil2 : bil1;

  while (true) {
    if (kpk % bil1 == 0 && kpk % bil2 == 0) {
      cout << "KPK dari " << bil1 << " dan " << bil2 << " adalah " << kpk << endl;
      break;
    }

    cout << kpk << endl;

    kpk++;
  }

  return 0;
}
