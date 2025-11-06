#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.14

int main()
{
    int r;

    cout << "Nhap ban kinh hinh tron: ";
    cin >> r;

    cout << "Dien tich hinh tron: " << PI * pow(r, 2);
}