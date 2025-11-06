#include <iostream>

using namespace std;

void DigitToWord(int d);

int main()
{
    int thang;

    cout << "Nhap thang trong nam: ";
    cin >> thang;

    DigitToWord(thang);
}

void DigitToWord(int d)
{
    if (d == 1) {
        cout << "Thang mot";
    }
    else if (d == 2) {
        cout << "Thang hai";
    }
    else if (d == 3) {
        cout << "Thang ba";
    }
    else if (d == 4) {
        cout << "Thang tu";
    }
    else if (d == 5) {
        cout << "Thang nam";
    }
    else if (d == 6) {
        cout << "Thang sau";
    }
    else if (d == 7) {
        cout << "Thang bay";
    }
    else if (d == 8) {
        cout << "Thang tam";
    }
    else if (d == 9) {
        cout << "Thang chin";
    }
    else if (d == 10) {
        cout << "Thang muoi";
    }
    else if (d == 11) {
        cout << "Thang muoi mot";
    }
    else if (d == 12) {
        cout << "Thang muoi hai";
    }
    else {
        cout << "Nhap sai thang. Yeu cau nhap lai" << endl;
    }
}