#include <iostream>
using namespace std;
  int main() {
	  int n;
	  double c = 1;
	  cout << "Введіть степінь: ";
	  cin >> n;
	  if (n > 0) {
		  for (int i = 1; i <= n; i++) {
		  c *= 2;
		}
    c = 1. / c;
		cout.precision(20);
		cout << c;
	}
	  else if (n == 0) {
		  cout << "1";
}
	  else {
		  cout << "Ви ввели невірне значення";
      }
	return 0;
}