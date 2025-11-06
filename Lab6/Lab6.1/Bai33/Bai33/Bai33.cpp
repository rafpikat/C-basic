#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	n & 1 ? cout << "n is an odd number" : cout << "n is an even number";

	return 0;
}