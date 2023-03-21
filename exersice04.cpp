#include <iostream>
using namespace std;

long factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;

  cout << "enter a value for n :";
  cin >> n;
  cout << "enter vaue for r :";
  cin >> r;

  cout << "nCr = " << nCr(n, r) << endl;

  return 0;
}

long factorial(int no) {
  int i;
  long fac = 1;
  for (i = no; i >= 1; i--) {
    fac = fac * i;
  }
  return fac;
}

long nCr(int n, int r) {
  long fac_n, fac_r, fac_n_r;

  fac_n = factorial(n);
  fac_r = factorial(r);
  fac_n_r = factorial(n - r);

  return fac_n / (fac_r * fac_n_r);
}
