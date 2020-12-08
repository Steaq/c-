#include <iostream>
using namespace std;
  int main() {
	int c0; 
    int count = 0;
	cout << "Введіть додатне число: ";
	cin >> c0;
	if (c0 > 0)	{
		while (c0 > 1){
			if (c0 % 2 == 0){
				c0 /= 2;
			}
			else {
				c0 = 3 * c0 + 1;
			}
			cout << '\n'<< c0;
			count++;
		}
		 cout <<"\nsteps = "<<count;
	}
	else {
		cout <<"Ви ввели 0 або від'ємне число";
	}
	return 0;
}