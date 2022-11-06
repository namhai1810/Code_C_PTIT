#include"stdio.h"
#include"math.h"
long long get(long long n){
	long long i,max=-1;
	while(n%2==0){
		max=2;
		n=n/2;
	}
	for(i=3;i<=sqrt(n);i=i+2){
		while(n%i==0){
			max=i;
			n=n/i;
		}
	}
	if(n>2){
		max=n;
	}
	return max;
}
int main(){
	int n;
	scanf("%d\n", &n);
	for(int c=0;c<n;c++){
		long long num;
		scanf("%lld", &num);
		printf("%lld\n", get(num));
	}
}

