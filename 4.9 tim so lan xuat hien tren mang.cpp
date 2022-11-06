#include<stdio.h>
void hienThi(int*, int*, int);
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
int chiSo(int *b,int n,int v){
	int i;
	for(i=0;i<n;i++){
	  if(b[i]==v){
	  	return i;
	  }	
	}return -1;
}
void XuatHien(int arr[],int n){
	int b[100];
	int dem[100];
	int size=0;
	int i;
	for(i=0;i<n;i++){
		dem[i]=0;
	}
	for(i=0;i<n;i++){
	
	int index=chiSo(b,size,arr[i]);
	if(index==-1){
		b[size]=arr[i];
		dem[size]=1;
		size++;
		
	}
	else{dem[index]++;
	}
}
          hienThi(b,dem,size);
}

void hienThi(int *b,int *dem,int n){
	printf("+++++++++++KQ++++++++++\n");
	int i;
	for(i=0;i<n;i++){
		printf("%d: %5d\n",b[i],dem[i]);
		
	}
}
int main() {
	int n;
	int arr[100];
	
	nhapN(arr,&n);
	XuatHien(arr, n);
return 0;
	
	
	
	return 0;
}





















