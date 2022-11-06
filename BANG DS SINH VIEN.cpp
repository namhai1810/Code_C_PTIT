#include<stdio.h>
struct hoVaTen {
	char ho[20];
	char dem[20];
	char ten[20];
};
struct diem{
    float toan;
	float van;
	float anh;
	float tbc;
};
struct sinhVien {
	int ma;
	struct hoVaTen name;
	char gioiTinh[20];
	int tuoi;
	struct diem mark;
};
void nhapname(struct hoVaTen *a) {
	printf("nhap ho:");
	scanf("%s", a->ho);
	printf("nhap dem:");
	getchar();// xóa b? nh? d?m
	gets(a->dem);//vì d?m có nhi?u kí t?
	printf("nhap ten:");
	scanf("%s", a->ten);
}
void nhapmark(struct diem *mark) {
	printf("nhap diem toan:");
	scanf("%f", &mark->toan);
	printf("nhap diem van:");
	scanf("%f", &mark->van);
	printf("nhap diem anh:");
	scanf("%f", &mark->anh);
	mark->tbc = (mark->toan + mark->anh + mark->van) / 3;
}
 struct sinhVien nhap(){
	struct sinhVien a;
	printf("Nhap ma:");
	scanf("%d", &a.ma);
	nhapname(&a.name);
	printf("Nhap tuoi:");
	scanf("%d", &a.tuoi);
	printf("Nhap gioi tinh:");
	scanf("%s", &a.gioiTinh);
	nhapmark(&a.mark);
	return a;
};
void hienThiCot() {
	printf("============================\n");
	printf("%-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n", 
		"Ma", "ho", "dem", "ten", "gioi tinh", "tuoi", "diem toan", "diem van", "diem tieng anh", "diem tbc");
}
void hienThiTTSV(struct sinhVien a) {
	printf("%-10d %-10s %-10s %10s %-10s %-10d %-10f %-10f %-10f %-10f\n", 
		a.ma, a.name.ho, a.name.dem, a.name.ten, a.gioiTinh, a.tuoi, a.mark.toan, a.mark.van, a.mark.anh, a.mark.tbc);
}
void hienThi(struct sinhVien *ds, int slsv) {
	int i;
	hienThiCot();
	for (i = 0; i <slsv; i++) {
		hienThiTTSV(ds[i]);
	}
	printf("=============================================\n");
}
int main() {
	struct sinhVien dssv[100];
	int slsv = 0;
	struct sinhVien sv;
    sv=nhap();
	dssv[slsv++] = sv;
	hienThiCot();
	hienThiTTSV(sv);
}
