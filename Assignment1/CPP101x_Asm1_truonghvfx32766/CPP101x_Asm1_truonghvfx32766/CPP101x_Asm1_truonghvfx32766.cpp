#include <iostream>

using namespace std;

int main()
{
    int ngay, thang, nam;
    int thang30[4] = { 4,6,9,11 };

    cout << "Nhap ngay: ";
    cin >> ngay;

    if (ngay <= 0 || ngay > 31) {
        cout << "Nhap sai ngay. Ket thuc chuong trinh";
        return;
    }
    
    cout << "Nhap thang: ";
    cin >> thang;

    if (thang <= 0 || thang > 12) {
        cout << "Nhap sai thang. Ket thuc chuong trinh";
        return;
    }
    else {
        for (int x : thang30) {
            if (x == thang) {

            }
        }
    }

    cout << "Nhap nam: ";
    cin >> nam;

    

}

