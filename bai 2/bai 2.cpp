#include <iostream>
#include "ManHinh.h"
#define MAX 100
int main()
{
	ManHinh a("01id","Trung Quoc",2,"ST",3);
	cout<<a;
    int n;
    cout << "Nhap vao so luong man hinh can nhap: ";
    cin >> n;
    cin.ignore();
    ManHinh mh[MAX];
    cout << "NHAP VAO THONG TIN MAN HINH" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Thong tin man hinh thu " << (i + 1) << endl;
        cin >> mh[i];
    }
    cout << "XUAT THONG TIN VUA NHAP" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Thong tin man hinh thu " << i + 1 << endl;
        cout << mh[i];
    }
    cout << "Man hinh co thuoc lon nhat: " << endl;
    float max = mh[0].getKichThuoc();
    for (int i = 1; i < n; i++) {
        if (max < mh[i].getKichThuoc()) {
            max = mh[i].getKichThuoc();
        }
    }
    for (int i = 0; i < n; i++) {
        if (max == mh[i].getKichThuoc()) {
            cout << mh[i].getNhanHieu() << endl;
        }
    }
    string xx[MAX];
    int index = 0;
    for (int i = 0; i < n; i++) {
        int kt = 0;
        for (int j = 0; j < index; j++) {
            if (xx[j] == mh[i].getXuatXu()) {
                kt = 1;
            }
        }
        if (kt == 0) {
            xx[index] = mh[i].getXuatXu();
            index++;
        }
    }
    for (int j = 0; j < index; j++) {
        int dem = 0;
        for (int i = 0; i < n; i++) {
            if (xx[j] == mh[i].getXuatXu()) {
                dem++;
            }
        }
        cout << xx[j] << ": " << dem << endl;
    }
}
