#include<stdio.h>
int main(){
	long long a,b,f,g=1;
	scanf("%lld",&b);
	for(f=0;f<b;f++){
	scanf("%lld",&a);
	long long i,j;
	long long arr[200],brr[200],c[200];
	for(i=0;i<a;i++) scanf("%lld",&arr[i]);
	for(j=0;j<a;j++) scanf("%lld",&brr[j]);
		for(i=0;i<a;i++){
		for(j=a-1;j>i;j--){
		if(arr[j-1]>arr[j]){
			long long tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
			
			}
		}
		
	}
		for(i=0;i<a;i++){
		for(j=a-1;j>i;j--){
		if(brr[j-1]<brr[j]){
			long long tmp=brr[j-1];
			brr[j-1]=brr[j];
			brr[j]=tmp;
			
			}
		}
	}
	long long k=0,h=0;
	for(i=0;i<2*a;i++){
		if(i%2==0){
			c[i]=arr[k];
			k++;
		}else{
			c[i]=brr[h];
			h++;
		}
		
	}
	printf("Test %lld:\n",g);
	g++;
	for(i=0;i<2*a;i++) printf("%lld ",c[i]);
printf("\n");	
}
}














