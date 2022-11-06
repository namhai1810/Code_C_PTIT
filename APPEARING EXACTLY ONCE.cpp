#include<stdio.h>
void nhap(int n,int arr[20]){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void Sapxep(int n,int arr[20]){
		int i;
	int j;
	for(i=0;i<=n;i++){
		for(j=n-1;j>i;j--){
		if(arr[j-1]>arr[j]){
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
			
			}
		}
		
	}
}
void dem(int n,int arr[20]){
	int i,count =0;
	for(i=0;i<n;i++){
	if(arr[i]==arr[i+1]){
		arr[i]=0;
		arr[i+1]=0;
	}
	}
	for(i=0;i<n;i++){
		if(arr[i]!=0) count++;
	}
	printf("%d\n",count);
		for(i=0;i<n;i++){
		if(arr[i]!=0) printf("%d ",arr[i]);
	}
}
int main(){
	int n,arr[20];
	scanf("%d",&n);
	nhap(n,arr);
	Sapxep(n,arr);
	dem(n,arr);
}
