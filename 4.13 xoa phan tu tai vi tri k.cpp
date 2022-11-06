#include<stdio.h>
void nhapN(int arr[],int *n){
	while(*n<=0){
		printf("Nhap n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void nhapK(int *k){
		int n=0;
	while((*k)>=n){
	
		printf("Nhap gia tri 0<k<=n:");
		scanf("%d",k);
}
}
void xoaK(int arr[],int *n){
	int k;
	nhapK(&k);
	int i;
	for(i=k;i<(*n-1);i++){
		arr[i]=arr[i+1];
	}
}
void hienThi(int arr[], int *n){
	
	int i;
	for(i=0;i<(*n-1);i++){
		printf("%5d",arr[i]);
	}
}
int main(){
	int n=0;
	int arr[100];
	nhapN(arr,&n);
	xoaK(arr,&n);
	hienThi(arr,&n);
}

























