#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	n > 0 ? cout << "n is a positive number" : (n < 0 ? cout << "n is a negative number" : cout << "n is equal to 0");

	return 0;
}