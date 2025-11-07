#include <iostream>
#include <iomanip>

using namespace std;

struct thoiGian {
    int gio;
    int phut;
    int ngay;
    int thang;
    int nam;
};

static int dinhDang = 24;

bool checkNamNhuan(int nam);
int soNgayTrongThang(int thang, int nam);
bool checkThoiGian(thoiGian tg, int namHienTai);
bool nhapSoNguyen(const string& thongBao, int& giaTri);
void nhapThoiGian(thoiGian &tg);
void xuatThoiGian(thoiGian tg);
void hienThiTheoDinhDang(thoiGian tg);
void chonDinhDang();
void chuyenMuiGio(thoiGian &t);

string tenThang[13] = {
    "", "Mot", "Hai", "Ba", "Tu", "Nam", "Sau",
    "Bay", "Tam", "Chin", "Muoi", "Muoi mot", "Muoi hai"
};

int main()
{
    thoiGian tg;

    nhapThoiGian(tg);

    xuatThoiGian(tg);

    chonDinhDang();

    xuatThoiGian(tg);
    
    chuyenMuiGio(tg);

    xuatThoiGian(tg);

    return 0;
}

bool checkNamNhuan(int nam) {
    return ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0));
}

int soNgayTrongThang(int thang, int nam) {
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return checkNamNhuan(nam) ? 29 : 28;
    default:
        return 0;
    }
}

bool checkThoiGian(thoiGian tg, int namHienTai) {
    // Kiem tra gio, phut, ngay, thang, nam duong
    if (tg.nam <= 0 || tg.thang <= 0 || tg.ngay <= 0 || tg.gio < 0 || tg.phut < 0) return false;

    // Thang khong duoc vuot qua 12
    if (tg.thang > 12) return false;

    // Nam khong duoc vuot qua nam hien tai
    if (tg.nam > namHienTai) return false;

    // Kiem tra so ngay trong thang
    int maxngay = soNgayTrongThang(tg.thang, tg.nam);
    if (tg.ngay > maxngay) return false;

    // ====== Kiem tra gio va phut ======
    if (tg.gio < 0 || tg.gio > 23) return false;
    if (tg.phut < 0 || tg.phut > 59) return false;

    return true;
}

bool nhapSoNguyen(const string& thongBao, int& giaTri) {
    cout << thongBao;
    cin >> giaTri;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Du lieu khong hop le, vui long nhap lai!\n\n";
        return false;
    }
    return true;
}

void nhapThoiGian(thoiGian &tg) {
    cout << "=== Nhap thoi gian ===\n";
    while (true) {
        if (!nhapSoNguyen("Nhap ngay: ", tg.ngay)) exit(0);
        if (!nhapSoNguyen("Nhap thang: ", tg.thang)) exit(0);
        if (!nhapSoNguyen("Nhap nam: ", tg.nam)) exit(0);
        if (!nhapSoNguyen("Nhap gio (0-23): ", tg.gio)) exit(0);
        if (!nhapSoNguyen("Nhap phut (0-59): ", tg.phut)) exit(0);

        break;
    }
    return;
}

void xuatThoiGian(thoiGian tg) {
    // Kiem tra thoi gian
    if (!checkThoiGian(tg, 2025)) {
        cout << "Thoi gian khong hop le. Ket thuc chuong trinh" << endl;
        exit(0);
    }
    hienThiTheoDinhDang(tg);
}

void hienThiTheoDinhDang(thoiGian tg) {
    cout << setfill('0');
    if (dinhDang == 12) {
        string buoi = (tg.gio >= 12) ? "PM" : "AM";
        int gio12 = tg.gio % 12;
        if (gio12 == 0) gio12 = 12;
        cout << setw(2) << gio12 << "g:" << setw(2) << tg.phut << "p " << buoi
            << ", Ngay " << setw(2) << tg.ngay
            << ", Thang " << tenThang[tg.thang]
            << ", " << tg.nam << endl;
    }
    else {
        cout << setw(2) << tg.gio << "g:" << setw(2) << tg.phut << "p"
            << ", Ngay " << setw(2) << tg.ngay
            << ", Thang " << tenThang[tg.thang]
            << ", " << tg.nam << endl;
    }
}

void chonDinhDang() {
    cout << "\nBan muon hien thi theo dinh dang nao? (12 hoac 24): ";
    int luaChon;
    cin >> luaChon;

    if (cin.fail() || (luaChon != 12 && luaChon != 24)) {
        cout << "Lua chon khong hop le. Ket thuc chuong trinh.\n";
        exit(0);
    }
    dinhDang = luaChon;
}

void chuyenMuiGio(thoiGian &t) {
    int utcOffset;
    cout << "Nhap mui gio hien tai (-12 -> +12): ";
    cin >> utcOffset;

    if (utcOffset < -12 || utcOffset > 12) {
        cout << "Mui gio khong hop le. Ket thuc chuong trinh.";
        exit(0);
    }

    t.gio += utcOffset;

    while (t.gio >= 24) {
        t.gio -= 24;
        t.ngay++;
        if (t.ngay > soNgayTrongThang(t.thang, t.nam)) {
            t.ngay = 1;
            t.thang++;
            if (t.thang > 12) {
                t.thang = 1;
                t.nam++;
            }
        }
    }

    while (t.gio < 0) {
        t.gio += 24;
        t.ngay--;
        if (t.ngay < 1) {
            t.thang--;
            if (t.thang < 1) {
                t.thang = 12;
                t.nam--;
            }
            t.ngay = soNgayTrongThang(t.thang, t.nam);
        }
    }
}