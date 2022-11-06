#include<stdio.h>
#include<math.h>
int snt(int n){
	int i;
	int mark=1;
	if(n==2){
		mark==1;
	}
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			mark=0;
		}
	}
	return mark;
}
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	long long a[10];
	int digits;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		j=2;
		digits=1;
		while(a[i]>1){
			if(a[i]%j==0&&snt(j)==1){
				a[i]/=j;
		if(digits!=j&&digits%j!=0){
			digits*=j;
		}		
			}else{
           
			j++;
			}
	}
	printf("%d\n",digits);
	}

	return 0;
}

