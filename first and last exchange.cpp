#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
  long long a[20];
  long long i=0;
  long long count=0;
  while(n>0){
  	a[i]=n%10;
  	n/=10;
  	i++;
  	count++;
  }
  long long tmp;
  tmp=a[count-1];
  a[count-1]=a[0];
  a[0]=tmp;
  if(a[count-1]==0){
  
  for(i=count-2;i>=0;i--){
  printf("%lld",a[i]);
  }
}
else{
	for(i=count-1;i>=0;i--){
  printf("%lld",a[i]);
}
}
	
}
