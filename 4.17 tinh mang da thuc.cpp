#include<stdio.h>
void NhapN(int *h,int *n){
	while((*n)<=0){
		printf("nhap gia tri n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<=*n;i++){
		printf("a%d=",i);
		scanf("%d",&h[i]);
	}
}
double tinhGTDT(int *h,int n){
	double x;
	printf("Nhap gia tri x:");
	scanf("%lf",&x);
	double kq=h[0];
	int i;
	double xMUI=1;
	for(i=1;i<=n;i++){
		xMUI *= x;
		kq += h[i]*xMUI;
	}
	return kq;
}
int main(){
int n=0;
int h[100];
NhapN(h,&n);
double kq=tinhGTDT(h,n);
printf("gia tri da thuc la :%0.3lf",kq);	
return 0;
}




