#include<stdio.h>
struct phanSo {
	int  tu;
	int mau;
};
struct phanSo nhap() {//struct phanSo la 1 ten ham
	struct phanSo p;
	printf("Nhap gia tri tu so:");
	scanf("%d", &p.tu);
	while (1) {
		printf("nhap gia tri khac 0:");
		scanf("%d", &p.mau);
		if (p.mau != 0) {
			break;
		}
	}
	return p;
}
int ucln(int a, int b) {
	if (a < 0) {
		a *= -1;
	}
	if (b < 0) {
		b *= -1;
	}
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

struct phanSo rutGon(struct phanSo p) {
	if (p.tu != 0) {
		int u = ucln(p.tu, p.mau);
		p.tu /= u;
		p.mau /= u;
	}
	return p;
}
int bcnn(int a,int b) {
	int u = ucln(a, b);
		return (a * b / u);
}
struct phanSo tong(struct phanSo p, struct phanSo q) {
	struct phanSo tong;
	tong.mau = bcnn(p.mau, q.mau);
	
		tong.tu = p.tu *(tong.mau/p.mau) + q.tu * (tong.mau/q.mau);
	
	tong=rutGon(tong);
	return tong;
}
struct phanSo hieu(struct phanSo p, struct phanSo q) {
	struct phanSo hieu;
	hieu.mau = bcnn(p.mau, q.mau);
hieu.tu=p.tu * (hieu.mau / p.mau) - q.tu * (hieu.mau / q.mau);

	hieu =rutGon(hieu);
	return hieu;
}
struct phanSo tich(struct phanSo p, struct phanSo q) {
	struct phanSo tich;
	tich.tu = q.tu * p.tu;
	tich.mau = q.mau * p.mau;
	tich = rutGon(tich);
	return tich;
}
struct phanSo thuong(struct phanSo p, struct phanSo q) {
	struct phanSo thuong;
	thuong.tu = p.tu * q.mau;
	thuong.mau = q.tu * p.mau;
	thuong = rutGon(thuong);
	return thuong;
}
void xuat(struct phanSo p) {
	printf("%d/%d", p.tu, p.mau);
	
}


int main() {
	int choice;
	do{
	printf("\n=====MENU=====");
	printf("\nVui long chon:\n");
	printf("1:Tao phan so can tim.\n2:Tinh tong 2 phan so,\n3:Tinh hieu 2 phan so.\n4Tinh Tich 2 phan so.\n5Tinh thuong 2 phan so");
	
	struct phanSo a, b, cong, tru, nhan, chia;
	printf("\nNhap yeu cau cua ban:\n");
	scanf("%d", &choice);
	switch (choice) {
	case 0:
		break;
	case 1:
		printf("Nhap gia tri phan so dau tien:\n");
		a = nhap();
		printf("\nnhap gia tri phan so thu 2\n");
		b = nhap();
		printf("\n phan so 1 la:");
		xuat(a);
		printf("\nphan so 2 la:");
		xuat(b);
		break;
	case 2:
		printf("Nhap gia tri phan so dau tien:\n");
		a = nhap();
		printf("\nnhap gia tri phan so thu 2\n");
		b = nhap();
		cong = tong(a, b);
		printf("%d/%d+%d/%d=%d/%d", a.tu, a.mau, b.tu, b.mau, cong.tu, cong.mau);
		break;
	case 3:
		printf("Nhap gia tri phan so dau tien:\n");
		a = nhap();
		printf("\nnhap gia tri phan so thu 2\n");
		b = nhap();
		tru = hieu(a, b);
		printf("%d/%d-%d/%d=%d/%d", a.tu, a.mau, b.tu, b.mau, tru.tu, tru.mau);
		break;
	case 4:
		printf("Nhap gia tri phan so dau tien:\n");
		a = nhap();
		printf("\nnhap gia tri phan so thu 2\n");
		b = nhap();
		nhan = tich(a, b);
		printf("%d/%d x %d/%d=%d/%d", a.tu, a.mau, b.tu, b.mau, nhan.tu,nhan.mau);
		break;
	case 5:
		printf("Nhap gia tri phan so dau tien:\n");
		a = nhap();
		printf("\nnhap gia tri phan so thu 2\n");
		b = nhap();
		chia = thuong(a, b);
		printf("%d/%d / %d/%d =%d/%d", a.tu, a.mau, b.tu, b.mau, chia.tu, chia.mau);
		break;
	default:
		printf("vui long nhap lai");

	}
	}while (choice);
	
	return 0;
	
}
