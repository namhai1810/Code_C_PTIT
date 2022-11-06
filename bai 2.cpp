#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0&&b!=0){
		printf("No solution");
	}
	if(a==0&&b==0){
		printf("Infinite solutions");
	}
	if(a!=0){
		printf("%.2f",(float)-b/a);
	}
}
