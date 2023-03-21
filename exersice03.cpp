#include <iostream>
using namespace std;
int main() {
  int no, r;
  long fac;

  cout << "enter a number : " << endl;
  cin >> no;

  fac = 1;

  for (int r = no; r >= 1; r--) {
    fac = fac * r;
  }
  cout << "factional of " << no << " is " << fac << endl;
}