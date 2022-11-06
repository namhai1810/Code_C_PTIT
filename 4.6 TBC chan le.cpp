#include<stdio.h>
void nhapN(int arr[],int *n){
	while(*n<=0){
		printf("Nhap gia tri n>0:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<*n;i++){
		printf("\narr[%d]:",i);
		scanf("%d",&arr[i]);
	}
}
void SUMCL(int arr[],int n,float *sumC,float *sumL){
	int countC=0,countL=0;
	int i;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){(*sumC)+=arr[i];
	    countC++;
		}
		else{
			(*sumL)+=arr[i];
			countL++;
		}
	}
	printf("trung binh cong so chan la:%0.2f\n",(*sumC)/countC);
	printf("trung binh cong so le la :%0.2f\n",(*sumL)/countL);
}
int main(){
	int n=0;
	int arr[15];
	nhapN(arr,&n);
	float sumC=0;
	float sumL=0;
	SUMCL(arr,n,&sumC,&sumL);
	return 0;
}












