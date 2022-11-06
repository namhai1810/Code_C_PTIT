#include<stdio.h>
int C(long long n){
	long long i,countl=0,countc=0;
	while(n>0){
		i=n%10;
		if(i%2==0){
			countc++;
		}else{
			countl++;
		}
		n/=10;
	}
	if(countc>countl){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	long long i,a;
	for(i=0;i<n;i++){
		scanf("%lld",&a);
		if(C(a)==1){
			printf("YES\n");
		}else{
		printf("NO\n");
		}
	}
	
	
	
	
}
