#include<stdio.h>
#define LENGTH 10
void nhap(int arr[]){
	int i;
	for(i=0;i<=LENGTH;i++){
		scanf("%d",&arr[i]);
	}
}
void hienThi(int arr[]){
	int i;
	for(i=0;i<=LENGTH;i++){
		printf("%5d",arr[i]);
	}
}
void timGTLNNN(int arr[],int *min, int *max){
	int i;
	
	for(i=1;i<=LENGTH;i++){
		if((*min)>arr[i]){(*min)=arr[i];
		}
		if((*max)<arr[i]){(*max)=arr[i];
		}
			}
}
void inRa(int min,int max){
if(max==min){printf("\nko co max min");
}else{
		printf("\nMin= %d va Max = %d", min ,max);
}
}
int main(){
	int arr[LENGTH];
		
	nhap(arr);
	hienThi(arr);
	int max=0;
    int min=0;
	timGTLNNN(arr,&min,&max);
	inRa(min,max);
	return 0;
}



