#include<stdio.h>
void nhapN(int arr[],int *n){
	while((*n)<=0){
		printf("nhap gia tri n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<(*n);i++){
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
int hienThi(int arr[],int *n){
	int i;
	for(i=0;i<*n;i++){
		printf("%5d",arr[i]);
	}
}
int tangDan(int *arr,int n ){
	int i;
	int j;
	for(i=0;i<=n;i++){
		for(j=n-1;j>i;j--){
		if(arr[j-1]>arr[j]){
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
			
			}
		}
		
	}
}
int giamDan(int *arr,int n ){
	int i;
	int j;
	for(i=0;i<=n;i++){
		for(j=n-1;j>i;j--){
		if(arr[j-1]<arr[j]){
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
			
			}
		}
		
	}
}

int main(){
	int arr[100];
	int n=0;
	nhapN(arr,&n);
	
	printf("\nsap xep tang dan:\n");
	tangDan(arr,n);
	hienThi(arr,&n);
	printf("\nsap xep giam dan:\n");
		giamDan(arr,n);
	hienThi(arr,&n);
	return 0;
}
