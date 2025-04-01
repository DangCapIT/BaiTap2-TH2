#include "PhanSo.h"
using namespace std;

void PhanSo::Nhap() {
    cout << "Nhap vao phan tu cua phan so: ";
    cin >> iTu;
    do {
    cout << "Nhap vao phan mau cua phan so (khac 0): ";
    cin >> iMau;
    } while (iMau == 0);

}

int TimUCLN(int a, int b)
{
    int temp = 0;
    while (b != 0){
        temp  = b;
        b = a % b;
        a = temp;
    }

    return a;
}

void PhanSo::RutGon()
{
    int ucln = TimUCLN(iTu, iMau);
    iTu = iTu/ucln;
    iMau = iMau/ucln;
}

PhanSo PhanSo::Tong(const PhanSo &ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(const PhanSo &ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(const PhanSo &ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Thuong(const PhanSo &ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

int PhanSo::SoSanh(const PhanSo &ps)
{
    double ps1, ps2;
    ps1 = (double)iTu/iMau;
    ps2 = (double)ps.iTu/ps.iMau;
    if (ps1 > ps2) return 1;
    else if (ps1 < ps2) return -1;
    return 0;
}

void PhanSo::Xuat() {
    if (iTu%iMau == 0) cout << iTu/iMau;
    else cout << iTu << "/" << iMau;
    cout << endl;
}
