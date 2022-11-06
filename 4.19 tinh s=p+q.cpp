#include <stdio.h>
void nhapN(int *a,int *n){
	*n=-2;
	while((*n)<=0){
		printf("\nNhap gia tri n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<=(*n);i++){
		printf("\nhe so x^%d:",i);
		scanf("%d",&a[i]);
	}
}
void khoiTao(int *a,int n){
	int i;
for(i=0;i<=n;i++){
	a[i]=0;
}
}//vi khac bac nhau nen khoi tao de +0
void tinhGTBT(int *p,int m,int *q,int n,int *s,int *k){
	int i;
	*k=(m>n)?m:n;
	
	for(i=0;i<=(*k);i++){
	s[i]=p[i]+q[i];	
	}
}
void hienThi(int *a,int n){
	int i;
	printf("S(x)=");
	for(i=n;i>=0;i--){
		printf("%dx^%d",a[i],i);
	
		if(i>=0&&a[i-1]>0){
			printf(" + ");
		}else{
			if(a[i-1]<0){
			
			printf(" ");}
		}
		
	}
	
}
int main(){
	int n;
	int p[50],m,q[50],s[50],k;
	khoiTao(p,50);
	khoiTao(q,50);
	printf("Cac he so P(x):");
	nhapN(p,&m);
	printf("Cach he so Q(x):");
	nhapN(q,&n);
	tinhGTBT(p,m,q,n,s,&k);
	hienThi(s,k);
}












