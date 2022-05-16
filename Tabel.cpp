#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int n, i, c, a, b, pos1, pos2, posc, sum;
  int vector1[10];
  int vector2[10];
  int vectorf[10];
  posc = 0;
  sum = 0;

  cout << "Introduceti numarul de biti doriti ";

  cin >> n;
  i = n;

  for (int pos1 = 0; pos1 < n; ++pos1) {
    cin >> vector1[pos1];
  }

  for (int pos2 = 0; pos2 < n; ++pos2) {
    cin >> vector2[pos2];
  }

  for (int posc = 0; posc < i; ++posc) {

    sum = vector1[posc] + vector2[posc];

    if (sum > 0)

    {
      vectorf[posc] = 1;
    } else {
      vectorf[posc] = 0;
    }

    sum = 0;
  }
  cout << "Operatia logica *Sau* Este : ";

  for (int posc = 0; posc < n; ++posc) {
    cout << " " << vectorf[posc];
  }

  for (int posc = 0; posc < i; ++posc) {

    sum = vector1[posc] * vector2[posc];

    if (sum > 0)

    {
      vectorf[posc] = 1;
    } else {
      vectorf[posc] = 0;
    }

    sum = 0;
  }
  cout << "\n";
  cout << "Operatia logica *Si* Este :";

  for (int posc = 0; posc < n; ++posc) {
    cout << " " << vectorf[posc];
  }

  for (int posc = 0; posc < i; ++posc) {

    if (vector1[posc] != vector2[posc])

    {
      vectorf[posc] = 1;
    } else {
      vectorf[posc] = 0;
    }
  }
  cout << "\n";
  cout << "Operatia logica *XOR* Este :";

  for (int posc = 0; posc < n; ++posc) {
    cout << " " << vectorf[posc];
  }

  return 0;
}
