#include<iostream>

using namespace std;

struct Student {
	char gender;
	int age;
	double gpa;
};

int main() {
	cout << sizeof(Student);
	return 0;
}