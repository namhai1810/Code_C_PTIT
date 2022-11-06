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
void Count(int arr[],int n){
	int x;
	int count=0;
	printf("Nhap gia tri cua x:");
	scanf("%d",&x);
	int i;
	for(i=0;i<n;i++){
		if(x==arr[i]){
			count++;
		}
	}
	printf("X lap %d lan",count);
}
int main(){
	int n;
	int arr[100];
	nhapN(arr,&n);
	
	Count(arr,n);
	return 0;
}
