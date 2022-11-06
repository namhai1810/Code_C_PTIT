#include<stdio.h>
void nhap(int n,int arr[20]){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void highest(int k, int arr[20]){
	int count=0,max=0;
	for(int i=0;i<k;i++){
	if(arr[i]>max) max=arr[i];
	}
	printf("%d\n",max);
	for(int i=0;i<k;i++){
		if(max==arr[i]) 
		printf("%d ",i);
}
}

int main(){
	int n,k,arr[20];
	int i,j;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&k);           
	nhap(k,arr);
	highest(k,arr);
    printf("\n");
	}
}
