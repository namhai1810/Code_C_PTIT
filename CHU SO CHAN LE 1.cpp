#include<stdio.h> 
int main(){
 int a,i=0,j=0; scanf("%d",&a); for(a;a>0;a/10){ if(a%2==0) i=i+1; else if(a%2==1) j=j+1; else printf("0"); a=a/10;} printf("%d %d",j,i); return 0; }
