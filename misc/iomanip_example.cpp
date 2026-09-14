#include <iomanip>  //setprecision
#include <iostream> //fixed
using namespace std;

int main() {

  cout << setprecision(3) << 3.514213123213 << endl;
  cout << fixed;
  cout << setprecision(3) << 3.514213123213 << endl;

  cout << setprecision(5) << 3.514213123213 << endl;

  cout << setw(10) << setprecision(5) << 3.514213123213 << endl;

  cout << right;

  cout << setw(10) << setprecision(5) << 3.514213123213 << endl;

  cout << left;

  cout << setw(10) << setprecision(5) << 3.514213123213 << endl;

  return 0;
}