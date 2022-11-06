#include<stdio.h>

  int sod(long long a){
  	int c;
    c=0;
	while(a>0)
	{
		c+=a%10;
		a/=10; 	
	}
	return c; 	 
  }
  int sym(long long a){  
    int n=a;
    int re=0;    
    while (a>0) 
    {
    re=re*10+a%10;
    a/=10;
    }
    int e=0;
    if (re==n) e=1;
    return e;
}
  int onc(long long a){
  	int c=1;
	while(a>0)
	{
		if((a%10)%2==0)
        {
        	c=0;
			break; 
		};
		a/=10;	
	} 
  	return c; 
  }


int main()
{
	long long a,i;
	scanf("%lld",&a); 
	long long s[a]; 
	for(i=0;i<a;i++)
	scanf("%lld",&s[i]);
	for(i=0;i<a;i++)
	{
		if(sod(s[i])%2==1&&onc(s[i])==1&&sym(s[i])==1)
		printf("YES\n");
		else printf("NO\n");
	}
 }
