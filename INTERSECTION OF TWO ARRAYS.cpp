#include<stdio.h>
int main(){
	int a,b,k=0,arr[100],brr[100],c[100];
	scanf("%d%d",&a,&b);
	int i,j;
	for(i=0;i<a;i++) scanf("%d",&arr[i]);
	for(j=0;j<b;j++) scanf("%d",&brr[j]);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(arr[i]==brr[j]){
				c[k]=arr[i];
				k++;
			}
		}
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
	for(i=0;i<k;i++) {
		if(c[i]!=c[i+1]){
	printf("%d ",c[i]);
}
}
}
