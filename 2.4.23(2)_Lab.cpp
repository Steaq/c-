#include <iostream>
using namespace std;
bool n (int x) {
	int c = 0, b = x;
	while (b > 0) {
		c = (c << 1) | (b & 1);
		b = b >> 1;
	}
	return (c == x) ? true : false;
}
int main() {
	int numb;
	bool check;
	cout << "Enter a number: ";
	cin >> numb;
	check = n(numb);
	check == true ? 

  printf("%d is a bitwise palindrome", numb) : 
  printf("%d is not a bitwise palindrome", numb);

return 0;
}