#include<iostream>

using namespace std;

void Sign(int n);

int main(int argc, char* argv[])
{
	int num;

	cin >> num;

	Sign(num);

	return 0;
}

void Sign(int n) {
	n >= 0 ? cout << "positive" : cout << "negative";
}