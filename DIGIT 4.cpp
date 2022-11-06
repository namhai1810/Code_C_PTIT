#include<stdio.h>
#include<math.h>
int reverse(int a){
int n=a;
int re=0;
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
int sum(int a){
	int digits,sum=0;
	while(a>0){
		digits =a%10;
		sum+=digits;
		a/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
int digits(int a){
	int digit;
	while(a>0){
		digit=a%10;
		if(digit==4) return 0;
		a/=10;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	double a;
	for(i = 0; i < n; i++){
		scanf("%lf", &a);
		int u = pow(10.0, (a-1)); // u la can duoi cua a
		int v = pow(10.0, a);//v la can tren cua a
		int k;
//		printf("%d %d\n", u, v);
		
		for(k = u+1; k < v; k++){
			if(reverse(k) !=0&&digits(k)==1&&sum(k)==1){
				printf("%d ", k);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}


















