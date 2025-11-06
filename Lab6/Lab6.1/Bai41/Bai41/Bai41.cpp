#include<iostream>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	a <= b && b <= c ? cout << "increasing" : (a >= b && b >= c ? cout << "decreasing" : cout << "neither increasing nor decreasing order");

	return 0;
}