#include<stdio.h>
void nhapMT(int arr[50][50],int *m, int *n){
	*m=*n=-2;
	while((*m)<=0&&(*n)<=0){
		printf("Nhap gia tri m,n >0:");
		scanf("%d%d",m,n);
	}
	int i,j;
	for(i=0;i<(*m);i++){
		for(j=0;j<(*n);j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void hienthiA(int arr[50][50],int *m,int *n){
	int i,j;
	printf("mang A gom:\n");
for(i=0;i<(*m);i++){
		for(j=0;j<(*n);j++){
		printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
void maTranCV(int arr[50][50],int b[50][50], int m,int n ){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=arr[j][i]; 
		}
	}
}
void hienthiB(int b[50][50],int *m,int *n){
	int i,j;
	printf("mang B gom:\n");
for(i=0;i<*m;i++){
		for(j=0;j<*n;j++){
		printf("%d",b[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m,n;
	int arr[50][50],b[50][50];
	nhapMT(arr,&m,&n);
	hienthiA(arr,&m,&n);
	maTranCV(arr,b,m,n);
	hienthiB(b,&m,&n);
	return 0;
}













