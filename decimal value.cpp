#include<stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	float a;
	for(int c=0;c<n;c++){
		if(n-c==1){
			
			scanf("%f",&a);
			printf("%0.15f",1.0/a);
		}else{
			scanf("%f\n",&a);
			printf("%0.15f\n",1.0/a);
		}
	}
}
