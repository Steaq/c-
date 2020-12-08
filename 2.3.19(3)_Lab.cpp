#include <iostream>
using namespace std;
  int main() {
	  int n;
	  long c = 2;
	  cout << "Введіть степінь: ";
	  cin >> n;
	  if (n > 1) {
		for (int i = 2; i <= n; i++) {
			c *= 2;
		}
		cout << c;
	}
	else {
		cout << "Ви ввели невірне значення";
	}
	return 0;
}