#include<stdio.h>
#include<math.h>
int sum(int a){
	int digits=0,sum=0;
	while(a!=0){
		digits=a%10;
		sum+=digits;
		a/=10;
	}
	return sum;
}
int fibo(int n){
	long long s[100];
	s[0]=0;
	s[1]=1;
	for(int i=2;i<100;i++){
		s[i]=s[i-1]+s[i-2];
	if(sum(n)==s[i]){
		return 1;
	}
		}
	}
	
int snt(int a){
	int i;
	int mark=1;
	if(a<2) mark=0;
	for(i=2;i<a;i++){
		if(a%i==0){
			mark=0;
			break;
		}
	}
return mark;

}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		int tmp;
		tmp=a;
		a=b;
		b=tmp;
	}
	int i;
	for(i=a;i<=b;i++){
		if(snt(i)==1 && fibo(i)==1){
			printf("%d ",i);
		}
	}
}
	
	
	
	
	
	
	
	
	
	
	
	

