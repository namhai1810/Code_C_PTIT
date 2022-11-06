#include<stdio.h>
void nhapN(int *arr,int *n){
while(*n<=0){printf("Nhap gia tri n>0:");
scanf("%d",n);
}
int i;
for(i=0;i<=*n;i++){
printf("\n arr[%d]=",i);
scanf("%d",&arr[i]);	
}
}
void GTLNNN(int *arr,int n,int *min,int *max){
	int i;
	(*min)=(*max)=arr[0];
	for(i=0;i<=n;i++){
		if((*max)<arr[i]){(*max)=arr[i];
		}
		if((*min)>arr[i]){(*min)=arr[i];
		}
	}
}
void GTLNNN2(int *arr,int n,int *max2,int *min2){
	int i;
	int min,max;
	 GTLNNN(arr,n,&min,&max);
	(*min2)=(*max2)=arr[1];
	for(i=0;i<=n;i++){
		if((*max2)<arr[i]&& arr[i]!= max){
			(*max2)=arr[i];
		}
		if((*min2)>arr[i]&& arr[i] != min){
		(*min2)=arr[i];
		}
	}
	
}
void inRaKQ(int *max2,int *min2){
	if(max2==min2){
		printf("khong co gia tri max min");
	}else{
		printf("Max2=%d,Min2=%d",*max2,*min2);
	}
	}
int main(){
	int n=0;
	int arr[1513];
	nhapN(arr,&n);
	int max=0,min=0;
	GTLNNN(arr,n,&min,&max);
	int max2=0,min2=0;
	GTLNNN2(arr,n,&max2,&min2);
	inRaKQ(&max2,&min2);
	
	
	return 0;
}











