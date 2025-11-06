#include <iostream>

using namespace std;

void CheckAge(int age);

int main()
{
    int age;

    cout << "Nhap tuoi: ";
    cin >> age;

    CheckAge(age);
}

void CheckAge(int age)
{
    age < 12 ? cout << "Thieu nhi" : (age >= 12 && age <= 50 ? cout << "Nguoi tre" : cout << "Nguoi gia");
}