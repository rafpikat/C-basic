#include <iostream>

using namespace std;

int main()
{
    int luongcb, tyLeTroCap, tyLeKhauTru, tienTroCap, tienKhauTru;

    cout << "Nhap tien luong co ban: ";
    cin >> luongcb;

    cout << "Nhap phan tram tro cap: ";
    cin >> tyLeTroCap;

    cout << "Nhap phan tram tien khau tru: ";
    cin >> tyLeKhauTru;

    cout << "Tien tro cap la " << (tienTroCap = luongcb * tyLeTroCap / 100);

    cout << "\nTien khau tru la " << (tienKhauTru = luongcb * tyLeKhauTru / 100);

    cout << "\nTien luong la " << luongcb + tienTroCap - tienKhauTru;
}