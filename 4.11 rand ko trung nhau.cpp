#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
bool koTrung(int *arr,int n,int x){
	int i;
	for(i=0;i<n;i++){
	
	if(arr[i]==x){
		return false;
	}
} return true;
}

void nhapN(int *arr,int *n){
	while((*n)<=0){
		printf("Nhap n>0:");
		scanf("%d",n);
	}
	srand(time(NULL));
	int i=0; 
	while(i<*n){
		int x=rand();
		if(koTrung(arr,i,x)){
			arr[i++]=x;
		}
	}
}
void xuat(int *arr,int *n){
	int i;
	for(i=0;i<*n;i++){
		printf("%d,",arr[i]);
	}
}
int main(){
	int n=0;
	int arr[100];
	nhapN(arr,&n);
	xuat(arr,&n);
	return 0;
}





