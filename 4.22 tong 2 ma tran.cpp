#include<stdio.h>
void nhapAB(int A[50][50],int *m,int*n,int B[50][50]){
	while((*n)<=0){
		printf("Nhap gia tri m,n>0:");
		scanf("%d%d",m,n);
	}
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}
	}
}
void hienThiA(int A[50][50],int *m,int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("%3d",A[i][j]);
		}
		printf("\n");
	}
}
void hienThiB(int B[50][50],int *m,int *n){
	int i,j;
	for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
			printf("%3d",B[i][j]);
		}
		printf("\n");
	}
}
void tinhTong(int A[50][50],int B[50][50],int m,int n){
	int i,j;
	int kq=0;
	printf("\nA[m][n]+B[m][n]:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			kq=A[i][j]+B[i][j];
			printf("%3d",kq);
		}
		printf("\n"); 
	}
	
}
int main(){
	int A[50][50],B[50][50];
	int m=-1,n=-1;
	nhapAB(A,&m,&n,B);
	printf("ma tran A:\n");
	hienThiA(A,&m,&n);
	printf("ma tran B:\n");
	hienThiB(B,&m,&n);
	tinhTong(A,B,m,n);
}





















