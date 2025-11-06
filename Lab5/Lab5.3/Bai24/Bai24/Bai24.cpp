#include<iostream>

using namespace std;

int main() {
	int a, n;

	cin >> a >> n;

	(a >> (n - 1)) & 1 ? cout << 1 : cout << 0;

	return 0;
}