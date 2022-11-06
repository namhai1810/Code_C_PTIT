#include<stdio.h>
#define max 20
void nhap(int n,int arr[max]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}
void xuat(int n,int arr[max]){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int n,arr[max];
	scanf("%d",&n);
	printf("\n");
	nhap(n,arr);
	int i,j;
	for(i=0;i<n;i++){
	for(j=n-1;j>i;j--){
		if(arr[j-1]>arr[j]){
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
		}
		
	}
	}
	xuat(n,arr);
}














