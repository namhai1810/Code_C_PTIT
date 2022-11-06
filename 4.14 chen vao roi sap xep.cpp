#include<stdio.h>
void nhapN(int *arr,int *n){
	while((*n)<=0){
		printf("Nhap gia tri n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<(*n-1);i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
}
int nhapX(int *x){
	
	printf("nhap gia tri x:");
	scanf("%d",x);
}
void sapXep(int arr[],int n){
	int i,j;
int x;
nhapX(&x);
	
arr[n]=x;
	for(i=0;i<=n;i++){
	for(j=n;j>i;j--){
		if(arr[j-1]>arr[j]){
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
		}
	}
	}

}
void hienThi(int arr[],int n){
	int i;
	
	for(i=1;i<=n;i++){
		printf("%5d",arr[i]);
	}

}
int main(){
	int n=0;
	int arr[100];
	nhapN(arr,&n);
	sapXep(arr,n);
	hienThi(arr,n);
}
