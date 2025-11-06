#include <iostream>
#include <iomanip>

using namespace std;

void Discount(float amount);

int main()
{
    float tien;

    cout << "Nhap so tien: ";
    cin >> tien;

    Discount(tien);

}

void Discount(float amount)
{
    cout << "So tien phai tra sau khi duoc chiet khau: " << endl;
    amount > 5000 ? cout << fixed << setprecision(2) << amount - amount * 20 / 100 : (amount <= 5000 && amount >= 2000 ? cout << fixed << setprecision(2) << amount - amount * 10 / 100 : cout << fixed << setprecision(2) << amount - amount * 5 / 100);

}