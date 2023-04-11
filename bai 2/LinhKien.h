#include<iostream>
#include<string>
using namespace std;

class LinhKien
{
private:
	string maLK;
	string xuatXu;
public:
	LinhKien() {
		maLK = "";
		xuatXu = "";
	}
	LinhKien(string maLK, string xuatXu) {
		this->maLK = maLK;
		this->xuatXu = xuatXu;
	}
	~LinhKien() {
	}
	void setMaLK(string maLK) {
		this->maLK = maLK;
	}
	string getMaLK() {
		return maLK;
	}
	void setXuatXu(string xuatXu) {
		this->xuatXu = xuatXu;
	}
	string getXuatXu() {
		return xuatXu;
	}
	void nhapLK() {
		string mlk, xx;
		cout << "Nhap vao ma linh kien: ";
		getline(cin, mlk);
		setMaLK(mlk);
		cout << "Nhap vao xuat xu: ";
		getline(cin, xx);
		setXuatXu(xx);
	}
	void xuatLK() {
		cout << "Ma linh kien: " << getMaLK() << endl;
		cout << "Xuat xu: " << getXuatXu() << endl;
	}
};

