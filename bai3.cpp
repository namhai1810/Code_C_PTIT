#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,delta;
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Infinite solutions");
			}else{
				printf("NO");
			}
		}
		else{
			printf(".2%f",-b/(2*a));
		}
	}else{
		delta=b*b-4*a*c;
		if(delta<0) printf("NO");
		if(delta==0) printf("%.2f",-b/(2*a));
		if(delta>0){
			printf("%.2f ",(-b+sqrt(delta))/(2*a));
			printf("%.2f",(-b-sqrt(delta))/(2*a));
		}
	}
}
