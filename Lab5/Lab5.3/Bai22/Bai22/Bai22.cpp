#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	n == 0 ? cout << 1 : cout << (1 << n);
	return 0;
}