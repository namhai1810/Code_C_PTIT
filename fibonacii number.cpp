#include<stdio.h>
long long fibon(long long a){
int i;
long long s1,s2,sn;
s1=0;
s2=1;
a--;
if(a==1) return 1;
if(a==2) return 1;
while(a>0){
	sn=s1+s2;
	s1=s2;
	s2=sn;
	a--;
}
return sn;
}
int main(){
	int i,n;
	scanf("%d",&n);

	for(i=0;i<n;i++){
		long long a;
		scanf("%lld",&a);
   printf("%lld\n",fibon(a));
	}
	
}
