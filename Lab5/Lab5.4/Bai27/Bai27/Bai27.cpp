#include<iostream>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    int n, maxS = 0;
    cin >> n;
    Student* students = new Student[100];

    for (int i = 0; i < n; i++) {
        cin >> (*(students + i)).name >> (*(students + i)).age >> (*(students + i)).score;
        maxS = maxS < (*(students + i)).score ? (*(students + i)).score : maxS;
    }

    for (int i = 0; i < n; i++) {
        if ((*(students + i)).score == maxS) {
            cout << "Name: " << (*(students + i)).name << endl;
            cout << "Age: " << (*(students + i)).age << endl;
            cout << "Score: " << (*(students + i)).score << endl;
        }
    }

    delete[] students;
    return 0;
}