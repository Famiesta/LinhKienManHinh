#include"LinhKien.h"
class ManHinh:public LinhKien
{
private:
	float kichThuoc;
	string nhanHieu;
	float gia;
public:
	ManHinh() {
		LinhKien::setMaLK("");
		LinhKien::setXuatXu("");
		kichThuoc = 0;
		nhanHieu = "";
		gia = 0;
	}
	ManHinh(string maLK, string xuatXu, float kichThuoc, string nhanHieu, float gia) {
		LinhKien::setMaLK(maLK);
		LinhKien::setXuatXu(xuatXu);
		this->kichThuoc = kichThuoc;
		this->nhanHieu = nhanHieu;
		this->gia = gia;
	}
	~ManHinh() {
	}
	void setKichThuoc(float kichThuoc) {
		this->kichThuoc = kichThuoc;
	}
	float getKichThuoc() {
		return kichThuoc;
	}
	void setNhanHieu(string nhanHieu) {
		this->nhanHieu = nhanHieu;
	}
	string getNhanHieu() {
		return nhanHieu;
	}
	void setGia(float gia) {
		this->gia = gia;
	}
	float getGia() {
		return gia;
	}
	friend istream& operator >>(istream& is, ManHinh& mh) {
		mh.LinhKien::nhapLK();
		string nh;
		float kt, g;
		cout << "Nhap vao kich thuoc: ";
		cin >> kt;
		cin.ignore();
		mh.setKichThuoc(kt);
		cout << "Nhap vao nhan hieu: ";
		getline(cin, nh);
		mh.setNhanHieu(nh);
		cout << "Nhap vao gia tien: ";
		cin >> g;
		cin.ignore();
		mh.setGia(g);
		return is;
	}
	friend ostream& operator << (ostream & os, ManHinh & mh) {
		mh.LinhKien::xuatLK();
		cout << "Kich thuoc: " << mh.getKichThuoc() << endl;
		cout << "Nhan hieu: " << mh.getNhanHieu() << endl;
		cout << "Gia tien: " << mh.getGia() << endl;
		return os;
	}
};

