#include<stdio.h>
void nhap(int k,int arr[1000]){
	for(int i=0;i<k;i++){
		scanf("%d",&arr[i]);
	}
}
void leadingnumber(int k,int arr[100]){
	int dem=0,i,max=0;
	if(k==1) printf("%d",arr[0]);
	else{
while(dem!=k&&dem!=k-1){
		max=0;
		for(i=dem;i<k;i++){
			if(arr[i]>=max) {
				dem=i;
				max=arr[i];
			}
		}
		dem++;
		printf("%d ",max);
		if(dem==k-1) {printf("%d\n", arr[k-1]);
		break;
}
	
}
}
}
int main(){
	int n;
	int arr[1000];
	scanf("%d",&n);
	int i,k;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		nhap(k,arr);
		leadingnumber(k,arr);
	printf("\n");
	}
	return 0;
}
