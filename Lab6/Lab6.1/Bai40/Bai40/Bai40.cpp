#include<iostream>

using namespace std;

int main() {
	int diem;

	cin >> diem;

	diem >= 0 && diem <= 10 ? cout << "The score is valid" : cout << "The score is not valid";

	return 0;
}