#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool thuanNghich(int n){

	int dao=0;
	int m=n;
		while(n>0){
			dao=dao*10+n%10;
			n/=10;
		
		}
		return dao==m;
		}
		
bool koChuachuso6(int n){
	int mark;
	while(n>0){
		mark=n%10;
		n/=10;
		if(mark==6){return false;
	}
	}
	return true;
}	
int tongChiahetcho6(int n){
	int mark=0,sum=0;
	while(n>0){
		mark=n%10;
		n/=10;
		sum+=mark;
	}
	return sum%6==0;
}

int main(){
	long long  i;
	printf("so thuan nghich la :");
	for(i=10000000;i<=99999999;i++){
		if(thuanNghich(i)&&tongChiahetcho6(i)&&koChuachuso6(i)){
			printf("%10lld,",i);
		}
	}
}
