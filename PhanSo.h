#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>
using namespace std;

class PhanSo
{
private:
    int iTu, iMau;

public:
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo Tong(const PhanSo &ps);
    PhanSo Hieu(const PhanSo &ps);
    PhanSo Tich(const PhanSo &ps);
    PhanSo Thuong(const PhanSo &ps);
    int SoSanh(const PhanSo &ps);
};

#endif
