#include<stdio.h>
#include<math.h>
int snt(int n){
	int i,mark=1;
	if(n==2) return 1;
	if(n==1) return 0;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			mark=0;
			break;
		}
	}
	if(mark==1) return 1;
	else return 0;
}
int main(){
	int i,j;
	int n,k,arr[20];
	scanf("%d",&k);
	for(j=0;j<k;j++){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(snt(arr[i])==1)
		printf("%d ",arr[i]);
	}
	printf("\n");
		}
			return 0;
	
}










