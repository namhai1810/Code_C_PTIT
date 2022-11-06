#include<stdio.h>
int fibon(long long a){
int i;
long long s[100];
s[0]=0;
s[1]=1;
for(i=2;i<100;i++){
	s[i]=s[i-1]+s[i-2];
}
for(i=0;i<100;i++){
	if(s[i]==a){
		return 1;
		break;
	}
	if(a>s[i]&&a<s[i+1]){
		return 0;
	break;
	}
}
}
int main(){
	int i,n;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		long long a;
		scanf("%lld",&a);
		if(!fibon(a)){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	
}
