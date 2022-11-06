#include"stdio.h"
int main(){
	int a[100],n,count=0,gt,vt;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Step 0: %d\n",a[0]);
	for(int i=1;i<n;i++){
        gt=a[i];
        vt=i;
        while(vt>0 && gt<a[vt-1]){
        	a[vt]=a[vt-1];
        	vt--;
		}
		a[vt]=gt;
		count++;
		printf("Step %d: ",count);
		for(int j=0;j<=i;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
		}
}
