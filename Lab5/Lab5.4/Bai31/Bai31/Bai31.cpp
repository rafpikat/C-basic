#include<iostream>

using namespace std;

struct MyStruct {
	char a;
	int b;
	short c;
	short d;
	double e;
};

int main() {
	cout << sizeof(MyStruct);
	return 0;
}