#include<stdio.h>
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
bool ktradx(int arr[],int n){
	int i;
	for(i=0;i<n/2;i++){
		if(arr[i]!=arr[n-1-i]){
			return false;
		}
	}return true;
}
int main(){
	int n;
	int arr[50];
	nhapN(arr,&n);
	if(ktradx(arr,n)){
		printf("\n Mang doi xung");

	}else{
		printf("Mang khong doi xung");
	}
	return 0;
}
