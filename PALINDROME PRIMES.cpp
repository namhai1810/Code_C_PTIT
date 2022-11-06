#include<stdio.h>
#include<math.h>
long long snt(long long n){
	long long i,mark=1;
	if(n==2) {
	return 1;}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			mark=0;
			break;
		}
	}
	if(mark==1){
		return 1;
	}else{
	return 0;
	}
}
long long reverse(long long a){
 long long n=a;
 long long re=0;
 while(a>0){
 	re=re*10+a%10;
 	a/=10;
 }
 if(re==n){
 	return re;
 }else{
 	return 0;
 }
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long i,j,count;
	long long a,b;
	for(i=0;i<n;i++){
		count=0;
		scanf("%lld%lld",&a,&b);
		for(j=a;j<=b;j++){
			if(snt(j)==1&&reverse(j)!=0){
			printf("%lld ",j);
				count++;
				if(count==10) {
				printf("\n");
				count=0;
				}
				
			}
		}
		printf("\n\n");
	}
}

