#include <iostream>
using namespace std;

int main() {
  double salary, netsalary;
  int etype, otHrs, otRate;

  cout << "enter employee type " << endl;
  cin >> etype;
  cout << "enter salary : " << endl;
  cin >> salary;
  cout << "enter otHrs : " << endl;
  cin >> otHrs;

  switch (etype) {
  case 1:
    otRate = 1000;
    break;
  case 2:
    otRate = 1500;
    break;
  default:
    otRate = 1700;
    break;
  }

  netsalary = salary + otHrs * otRate;

  cout << "net salary is : " << netsalary << endl;

  return 0;
}