#include<iostream>

using namespace std;

int main() {
    int count = 0, a;

    cin >> a;

    while (a > 0) {
        a & 1 ? count++ : count;
        a >>= 1;
    }

    cout << "answer = " << count;

    return 0;
}