#include<stdio.h>
int Dx(int x){
	int j;
	int temp2 = x;
	int temp = 0;
	while(x > 0){
		temp = temp*10 + x%10;
		x /= 10;
	}
	if(temp == temp2){
		return 1;
	}else{
		return 0;
	}
}

int Non9(int x){
	int j = 0;
	long int a[10000];
	a[10000] = 0;
	while(x>0){
		a[j] = x%10;
		x /= 10;
		j++;
	}
	for(j=0; j < 1000; j++){
		if(a[j] == 9 ){
			return 0;
		}
	}
	return 1;
}



int main(){
	unsigned int n;
	scanf("%d", &n);
	int i;
	int temp1 = 0;
	for(i = 2; i < n; i++){
		if(Dx(i) == 1 && Non9(i) == 1 ){
			printf("%d ", i);
			temp1++;
		}
		
	}
	printf("\n");
	printf("\n%d", temp1);
	
	
	return 0;
}
