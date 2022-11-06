#include<stdio.h>
#define N 100
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int a[N],b[N],test,n;
	scanf("%d",&test);
	for(int x=0;x<test;x++){
		int max=0,index;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			b[i]=1;
		}
		nhapmang(a,n);
		for(int i=n-1;i>=0;i--){
		if(a[i]>a[i-1]) b[i-1]=b[i]+1;
		}
		for(int i=0;i<n;i++){
			if(b[i]>max){
			max=b[i];
		}}
		printf("Test %d:\n",x+1);
		printf("%d\n",max);
		for(int i=0;i<n;i++){
            if(b[i]==max){
            	for(int j=i;j<i+max;j++){
            		printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
}}
