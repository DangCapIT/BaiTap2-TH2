#include "PhanSo.h"

int main()
{
    PhanSo ps1, ps2;
    ps1.Nhap();
    ps1.RutGon();
    ps1.Xuat();

    ps2.Nhap();
    ps2.RutGon();
    ps2.Xuat();

    PhanSo tong = ps1.Tong(ps2);
    cout << "Tong hai phan so: ";
    tong.Xuat();

    PhanSo hieu = ps1.Hieu(ps2);
    cout << "Hieu hai phan so: ";
    hieu.Xuat();

    PhanSo tich = ps1.Tich(ps2);
    cout << "Tich hai phan so: ";
    tich.Xuat();

    PhanSo thuong = ps1.Thuong(ps2);
    cout << "Thuong hai phan so: ";
    thuong.Xuat();

    int so_sanh = ps1.SoSanh(ps2);
    if (so_sanh == 1) cout << "Phan so thu nhat lon hon phan so thu hai!";
    else if (so_sanh == -1) cout << "Phan so thu nhat be hon phan so thu hai";
    else cout << "Hai phan so bang nhau!";

    return 0;
}
