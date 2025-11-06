#include<iostream>

using namespace std;

int main() {
	int a;

	cin >> a;

	a >= 10 && a <= 100 ? cout << a << " is in the range [10, 100]" : cout << a << " is not in the range [10, 100]";

	return 0;
}