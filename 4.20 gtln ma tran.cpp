#include<stdio.h>
void nhapMT(int arr[50][50],int *m, int *n){
	*m=*n=-2;
	while((*m)<=0&&(*n)<=0){
		printf("Nhap gia tri m,n >0:");
		scanf("%d%d",m,n);
	}
	int i,j;
	for(i=0;i<=(*m);i++){
		for(j=0;j<=(*n);j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void timGTLN(int arr[50][50],int m,int n){
	int i,j;
	int max;
	for(i=0;i<=n;i++){
		max=arr[i][0];
		for(j=1;j<=n;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
			
		}
		printf("\ngia tri max tren hang %d:%d",i,max);
	}
}
int main(){
	int arr[50][50];
int m,n;
	nhapMT(arr,&m,&n);
	timGTLN(arr,m,n);
}





















