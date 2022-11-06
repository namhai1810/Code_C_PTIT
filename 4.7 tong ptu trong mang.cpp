#include<stdio.h>

void nhapN(int *arr,int *n){
while(*n<=0){printf("Nhap gia tri n>0:");
scanf("%d",n);
}
int i;
for(i=0;i<=*n;i++){
printf("\n arr[%d]=",i);
scanf("%d",&arr[i]);	
}
}
void NhapAB(int *a,int *b){
	while(1){
		printf("Nhap gia tri a<b:");
		scanf("%d%d",a,b);
		if((*a)<(*b)){break;
		} 
	}
}
int TinhTong(int arr[],int n,int tong,int a,int b){
	int i;
	tong =0;
	for(i=0;i<n;i++){
		if(arr[i]>=a&&arr[i]<=b){
			tong+=arr[i];
		}
	}
	return tong;
}
int main(){
	int n=0;
	int arr[15];
	nhapN(arr,&n);
	int a=0,b=0;
	NhapAB(&a,&b);
	int tong=TinhTong(arr,n,tong,a,b);
	printf("SUM[%d,%d]=%d",a,b,tong);
}



