#include<iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student info;

    cin >> info.name >> info.age;

    cout << "Name: " << info.name << endl << "Age: " << info.age;

    return 0;
}