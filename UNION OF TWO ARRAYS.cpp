#include<stdio.h>
int main(){
	int k=0,i,j,a,b,arr[200],brr[200],c[200];
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++) scanf("%d",&arr[i]);
	for(j=0;j<b;j++) scanf("%d",&brr[j]);
	for(i=0;i<a;i++){
		c[k]=arr[i];
		k++;
	}
	for(j=0;j<b;j++){
		c[k]=brr[j];
		k++;
	}
	
	for(i=0;i<k;i++){
		for(j=k-1;j>i;j--){
		if(c[j-1]>c[j]){
			int tmp=c[j-1];
			c[j-1]=c[j];
			c[j]=tmp;
			}
		}
}
for(i=0;i<k;i++){
	if(c[i]!=c[i+1]){

			printf("%d ",c[i]);
		}
}
	}
	

