#include<stdio.h>
#define length 100
void nhap(int n,int arr[length]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuat(int n,int arr[length]){
	int i;
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
}
void selectionSort(int n,int arr[length]){
	int i,tmp,j,index,k=1,min;
	for(i=0;i<n-1;i++){
		index=i;
		min=arr[i];
		for(j=i;j<n;j++){
			if(min>arr[j]){
			index=j;
			min=arr[j];
		}
		}
		tmp=arr[i];
		arr[i]=arr[index];
		arr[index]=tmp;
		printf("Step %d:",k++);
		xuat(n,arr);
		printf("\n");
	}
}
int main(){
	int n,arr[length];
	scanf("%d",&n);
	nhap(n,arr);
	selectionSort(n,arr);
}












