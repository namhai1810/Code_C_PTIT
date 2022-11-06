#include <stdio.h>
#include<stdbool.h>
#include<math.h>

void nhapN(int *arr, int *n) {
	while((*n) <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("\narr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

int hieuGanNhat(int arr[],int n,int *x){
	int hieu;
	hieu=abs(arr[0]-*x);
	int i;
	for(i=0;i<n;i++){
		if(hieu>abs(arr[i]-*x)){
			hieu==abs(arr[i]-*x);
		}
	}
	return hieu;	
}
bool khongTrung(int *b,int n,int v){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==v){
			return false;
		}
		
		
	}return true;
	
}


void hienThiKQ(int *arr,int n,int x, int hieu){
	int i;
	int b[100];
	int count =0;
	for(i=0;i<n;i++){
		if(abs(arr[i]-x)==hieu&& khongTrung(b,count,arr[i])){
			printf("%5d,",arr[i]);
			b[count++]=arr[i];
		}
	}
}

int main(){
	int n=0;
	int x;
	int arr[100];
	nhapN(arr,&n);
	printf("Nhap gia tri x:");
	scanf("%d",&x);
	hieuGanNhat(arr,n,&x);
	int hieu=hieuGanNhat(arr,n,&x);
	hienThiKQ(arr,n,x,hieu);
	return 0;
}






















