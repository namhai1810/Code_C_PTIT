#include<stdio.h>
#define N 100
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
}}
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a[N],n,count=0,dem;
	scanf("%d",&n);
	nhapmang(a,n);
    for(int i=0;i<n;i++){
    	dem=0;
    	for(int j=i+1;j<n;j++){
    		if(a[i]>a[j]){
			swap(&a[i],&a[j]);
    		dem++;}
		}
		if(dem!=0){
			count++;
			printf("Step %d: ",count);
			for(int x=0;x<n;x++){
				printf("%d ",a[x]);
			}
			printf("\n");
		}	
	}
}
