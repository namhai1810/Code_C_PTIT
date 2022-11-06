#include<stdio.h>
void nhapN(int *arr,int *n){
	while((*n)<=0){
		printf("nhap so phan tu cua mang:");
		scanf("%d",n);
	}
	int i;
	for(i=0;i<(*n);i++){
		printf("\nphan tu mang %d:",i);
		scanf("%d",&arr[i]);
	}
}
void mangGoc(int *arr,int *n){
	int i;
	printf("\n");
	for(i=0;i<*n;i++){
		printf("%5d",arr[i]);
	}
}
void timVT(int *arr,int n,int *start,int*end,int *count){
	int j=0;
	start[j]=0;
	int i;
	for(i=1;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			end[j++]=i;
		
			start[j]=i+1;
		}
	}
	end[j++]=n-1;
	*count=j;
}
int max(int n,int *start,int *end){
	int max=end[0]-start[0]+1;
	int i;
	for(i=1;i<n;i++){
		int length=end[i]-start[i]+1;
		if(length>max){
			max=length;
		}
	}
	return max;
}
	void hienthi(int *arr,int startIndex,int length){
		printf("\n Vi tri bat dau la %d, do dai:%d",startIndex,length);
	printf("\nCac phan tu trong mang la:");
	int i;
	for(i=startIndex;i<startIndex+length;i++){
		printf("%5d,",arr[i]);
	}
printf("\n");	
}



void ketQua(int *arr,int n,int *start,int *end,int count){
	int i;
	if(count ==n){	
		printf("\nkhong co quang duong chay dai nhat.");
	}
	else{
		int timmax=max(count,start,end);
	
		for(i=0;i<count;i++){
			int len=end[i]-start[i]+1;
			if(len==timmax){
				hienthi(arr,start[i],len);
			}
		}
	}
}

int main(){
	int n=0;
	int arr[100];
	nhapN(arr,&n);
	mangGoc(arr,&n);
	int start[100];
	int count =0;
	int end[100];
	timVT(arr,n,start,end,&count);
	ketQua(arr,n,start,end,count);
	return 0;
}















