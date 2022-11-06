#include<stdio.h>
#include<math.h>
int NonDec(int x){
	int temp1, temp2;
	while(x > 0){
		temp1 = x%10;
		x /= 10;
		temp2 =  x%10;
		if(temp1 < temp2){
			return 0;
		}
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
			if(NonDec(k) == 1){
				printf("%d ", k);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}


