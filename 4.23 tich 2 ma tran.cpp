#include<stdio.h>
void nhap(int a[50][50],int *m,int *n){
		printf("Nhap gia tri m,n>0:");
		scanf("%d%d",m,n);
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("x[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void hienThi(int a[50][50],int *m,int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
void tinhTich(int  a[50][50],int b[50][50],int c[50][50],int m,int n,int k){
	int i,j,h;
	for(i=0;i<m;i++){
		for(j=0;j<k;j++){
			for(h=0;h<k;h++){
				c[i][j]+=a[i][h]*b[h][j];
			}
		}
	}
	
}
int main(){
	int a[50][50],b[50][50],c[50][50];
	int ma,na,nb,kb;
	printf("Nhap mang A:\n");
	nhap(a,&ma,&na);
	printf("Nhap mang B:\n");
	nhap(b,&nb,&kb);
	if(na!=nb){
		printf("ko tinh dc tich");
	}
	else{
		printf("ham A co dang :\n");
		hienThi(a,&ma,&na);
		printf("ham B co dang :\n");
		hienThi(b,&nb,&kb);
		tinhTich(a,b,c,ma,na,kb);
		printf("ham C co dang:\n");
		hienThi(c,&ma,&kb);
	}
}




















