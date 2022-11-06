#include<stdio.h>
void nhapN(int arr[],int *n){
	while(*n<=0){
		printf("Nhap n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<(*n-1);i++){
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
}
void nhapKX(int *k,int *x){
	printf("Nhap gia tri x:");
	scanf("%d",x);
		printf("Nhap vi tri k chen vao mang:");
		scanf("%d",k);
}
void chenMang(int arr[], int n){
	int k=0;
	int x;
	nhapKX(&k,&x);
	
	if(k<=n-1){
		int i;
		
		int tmp;
		for(i=n-1;i>=k;i--){
		if(i==k){arr[k]=x;
		}
		else{arr[i]=arr[i-1];
		}
		}//hoac for(i=n-1;i>k;i--) roi sau do arr[k]=x)
		
	}
	else{arr[n]=x;
	}
	
}
int hienThi(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%-10d",arr[i]);
	}
}
int main(){
	int n=0;
	int arr[100];
	nhapN(arr,&n);
	chenMang(arr,n);
	hienThi(arr,n);
}



















